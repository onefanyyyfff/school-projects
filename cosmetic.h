#ifndef COSMETIC_H
#define COSMETIC_H
#include "commidity.h"

class Cosmetic : public Commidity {
private:
    int efficacy;//2表示面部，3表示身体，4表示口腔
    QString ml;
public:
    Cosmetic();
    int getEfficacy();
    void setEfficacy(int e);
    QString getMl();
    void setMl(QString m);
};

#endif // COSMETIC_H
