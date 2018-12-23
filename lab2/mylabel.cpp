#include "mylabel.h"

MyLabel::MyLabel(const QString &text, QWidget *parent,
Qt::WindowFlags f)
    :QLabel(text, parent, f)
{
}

MyLabel::MyLabel(QWidget *parent, Qt::WindowFlags f)
    :QLabel(parent, f)
{

}

void MyLabel::checkValue()
{
    if (text().toInt() >= 10)
    {
        emit disableEnter(true);
    }
}
