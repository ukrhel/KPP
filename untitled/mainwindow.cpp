#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //соединяем сигналы и слоты
 //   connect(ui->pushButton, SIGNAL(clicked()), this,SLOT(addWord()));
    connect(ui->label_2, SIGNAL(disableEnter()), ui->pushButton,SLOT(hide()));
}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if (ui->lineEdit->text() != ""){
        this->setWindowTitle(ui->lineEdit->text());
    }

}

/*void MainWindow::addWord()
{
    QString newWord = ui->lineEdit->text();
//слово из QLineEdit
    if (!newWord.compare(bannedWord, Qt::CaseInsensitive))  //если это «помидор»
    {
        //выводим сообщешие
        QMessageBox msgBox;
        msgBox.setText("И не стыдно?");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
        //увеличиваем количество штрафа
        ui->label_2->incValue();
    }
    else
    {
        //иначе добавляем слово в QTextEdit
        ui->textEdit->append(newWord + '\n');
    }
}
*/
