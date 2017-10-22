#ifndef USER_H
#define USER_H
#include <iostream>
#include <stdlib.h>
#include <QString>

class User {
private:
    QString userName;
    QString userPsw;
    int alreadyReg;
public:
    User() ;
    void setUserName(QString name) ;
    QString getUserName() ;
    void setUserPsw(QString psw) ;
    QString gerUserPsw() ;
};
#endif // USER_H
