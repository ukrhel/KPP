#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //соединяем сигналы и слоты
    connect(ui->label, SIGNAL(disableEnter(bool)), ui->plainTextEdit, SLOT(setDisabled(bool)));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(modifyTitle()));
    connect(ui->plainTextEdit_2, SIGNAL(textChanged()), this, SLOT(showStarsCount()));
    connect(ui->plainTextEdit, SIGNAL(textChanged()), this, SLOT(copySymbols()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::modifyTitle()  //изменить заголовок окнапрограммы
{
    QString newTitle = ui->lineEdit->text();     //словоиз QLineEdit
    setWindowTitle(newTitle);
}

void MainWindow::copySymbols()  //копирование символов с 1 plainTextEdit в другой
{
    QString oldText = ui->plainTextEdit->toPlainText(); //текст из QPlainTextEdit
    QString newText;
    for(int i=0; i<oldText.count();i++){
        if (oldText[i]=='a') newText[i]='*';  //заменяемсимволы
            else newText[i]=oldText[i];
    }
    //добавляем слово в QPlainText_2
    ui->plainTextEdit_2->setPlainText(newText);
}

void MainWindow::showStarsCount()
{
    QString myText = ui->plainTextEdit_2->toPlainText();    //текст из QPlainTextEdit_2
    int myCount=0;
    for(int i=0; i<myText.count();i++){
        if (myText[i]=='*') myCount++;  //заменяемсимволы
    }
    //вывести кол-во '*' в QLabel
    ui->label->setText(QString::number(myCount));
    ui->label->checkValue();
}
