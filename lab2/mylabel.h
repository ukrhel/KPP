#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>

class MyLabel : public QLabel
{
    Q_OBJECT

public:
    explicit MyLabel(QWidget * parent = 0, Qt::WindowFlags f=0);
    explicit MyLabel(const QString & text, QWidget * parent =0, Qt::WindowFlags f=0);

signals:
    void disableEnter(bool);    //сигнал, испускаемый при превышении
                            //максимально допустимого количества символов
public slots:
    void checkValue();        //определим слот, позволяющий проверить
                            //нужно ли блокировать ввод
};

#endif // MYLABEL_H
