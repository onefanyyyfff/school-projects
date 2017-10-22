#ifndef CLOTH_H
#define CLOTH_H
#include "commidity.h"

class Cloth : public Commidity {
private:
    QString size;
    int sizeNum;
    int sex;
public:
    Cloth();
    QString getSize();
    void setSize(QString n);
    int getsizeNum();
    void setsizeNum(int num);
    int getSex();//0是女 1是男
    void setSex(int s);
};
#endif // CLOTH_H
