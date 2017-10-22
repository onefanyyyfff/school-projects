#include "user.h"

User::User() {
    userName = "";
    userPsw = "";
    alreadyReg = 0;
};
void User::setUserName(QString name) {
    userName = name;
};
QString User::getUserName() {
    return userName;
};
void User::setUserPsw(QString psw) {
    userPsw = psw;
};
QString User::gerUserPsw() {
    return userPsw;
};
