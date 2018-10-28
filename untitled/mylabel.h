#ifndef MYLABEL_H
#define MYLABEL_H
#include <QLabel>
class MyLabel : public QLabel
{
    Q_OBJECT
private:
    int value = 0;          //текущее значение баллов
    const int banLimit = 3; //максимальное количество штрафных баллов,
                            //не приводящее к запрету добавления
public:
    MyLabel(QWidget *parent = 0);
public slots:
    void incValue();        //определим слот, позволяющий увеличить количество штрафа
signals:
    void disableEnter();         //сигнал, испускаемый при превышении макс. допустимого количества штрафа

};
#endif // MYLABEL_H
