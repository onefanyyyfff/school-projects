#include "home.h"
#include "ui_home.h"
#include <QTimer>
#include <QLabel>
#include<QDebug>
const QString strScrollCation = QString::fromLocal8Bit("好书与秋来，数百万畅销图书 满200减100    ");

Home::Home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
    QTimer *pTimer = new QTimer(this);
    connect(pTimer,  SIGNAL(timeout()),  this,  SLOT(scrollCaption()));
    pTimer->start(800);
}

Home::~Home()
{
    delete ui;
}
//跑马灯广告宣传语
void Home::scrollCaption()
{
    static int nPos = 0;
    if (nPos > strScrollCation.length())
        nPos = 0;
    ui->horseLamp->setText( strScrollCation.mid(nPos));
    QString sss = ui->horseLamp->text().append(" " +strScrollCation.left(nPos) + " " );
    ui->horseLamp->setText(sss);
    ui->horseLamp->setGeometry(50,50,this->width(),40);
    nPos++;
}



