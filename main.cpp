#include "reglog.h"
#include "user.h"
#include <QApplication>
#include <QDesktopWidget>
User user[100];
int n=0;
int nowUser=-1;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDesktopWidget *desktop=QApplication::desktop();
    //获取桌面宽度
    int w=desktop->width();
    reglog window;
    //居中显示
    window.move((w-window.width())/2,0);
    window.show();

    return a.exec();
}
