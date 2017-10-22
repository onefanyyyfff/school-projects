#include "cloth.h"
#include "commidity.h"
Cloth::Cloth()
{
    size = "";
    sex = 0;
    sizeNum = 0;
};
QString Cloth::getSize() {
    return size;
};
void Cloth::setSize(QString n) {
    size = n;
};
int Cloth::getsizeNum() {
    return sizeNum;
};
void Cloth::setsizeNum(int num) {
    sizeNum = num;
};
int Cloth::getSex() {
    return sex;
};
void Cloth::setSex(int s) {
    sex = s;
};
