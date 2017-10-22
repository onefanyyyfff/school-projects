#include "reglog.h"
#include "ui_reglog.h"
#include "fileoption.h"
#include "home.h"
#include "user.h"
#include <QMessageBox>
#include <QDesktopWidget>

extern User user[100];
extern int n;
extern int nowUser;
reglog::reglog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reglog)
{
    ui->setupUi(this);

    connect(this,SIGNAL(toHomewindow()),this,SLOT(openHome()));
}

reglog::~reglog()
{
    delete ui;
}

void reglog::on_logButton_clicked()
{
    QString uName = ui->logNameEdit->text();
    QString uPsw = ui->logPswEdit->text();
    int i = readUserData(uName,uPsw);
    if(i == 1) {
        emit toHomewindow();
    }
    else if(i == 2) {
        QMessageBox::warning(this, tr("警告！"),
                           tr("您的密码输入错误"),
                           QMessageBox::Yes);
    }
    else {
        QMessageBox::warning(this, tr("警告！"),
                           tr("用户不存在"),
                           QMessageBox::Yes);
    }
}
void reglog::openHome()
{
    this->hide();
    home=new Home();
    QDesktopWidget *desktop=QApplication::desktop();
    //获取桌面宽度
    int w=desktop->width();
    //居中显示
    home->move((w-home->width())/2,0);
    home->show();
}

void reglog::on_logExitButton_clicked()
{
    this->close();
}

void reglog::on_regButton_clicked()
{
    QString uName = ui->regNameEdit->text();
    QString uPsw = ui->regPswEdit->text();
    QString reuPsw = ui->reregPswEdit->text();
    if(uName == "" ||uPsw == "") {
        QMessageBox::warning(this, tr("提示！"),
                           tr("您必须设置您的用户名和密码"),
                           QMessageBox::Yes);
    }
    else{
        if(uPsw == reuPsw) {
            int i = readUserData(uName,uPsw);
            if(i == 1||i == 2) {
                QMessageBox::warning(this, tr("提示！"),
                                   tr("用户已存在"),
                                   QMessageBox::Yes);
            }
            else {
                writeUserData(uName,uPsw);
                user[n].setUserName(uName);
                user[n].setUserPsw(uPsw);
                n++;
                emit toHomewindow();
            }
        }
        else {
            QMessageBox::warning(this, tr("提示！"),
                               tr("两次密码输入不一致"),
                               QMessageBox::Yes);
        }
    }
}

void reglog::on_regExitButton_clicked()
{
    this->close();
}
