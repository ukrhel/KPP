#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QMessageBox>
#include <mylabel.h>
namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();
//    void copy();
 //   void countIt();

private:
    Ui::MainWindow *ui;
};



/*private:
    const QString bannedWord = "помидор";
    Ui::MainWindow *ui;
private slots:
    void addWord();
*/

#endif // MAINWINDOW_H
