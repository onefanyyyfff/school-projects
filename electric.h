#ifndef ELECTRIC_H
#define ELECTRIC_H
#include "commidity.h"

class Electric : public Commidity {
private:
    QString memory;
    QString HD;
public:
    Electric();
    QString getMemory();
    void setMemory(QString m);
    QString getHD();
    void setHD(QString h);
};

#endif // ELECTRIC_H
