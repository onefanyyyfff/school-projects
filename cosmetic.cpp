#include "cosmetic.h"

Cosmetic::Cosmetic()
{
    efficacy = 0;
    ml = "0";
}
int Cosmetic::getEfficacy() {
    return efficacy;
}
void Cosmetic::setEfficacy(int e) {
    efficacy = e;
}
QString Cosmetic::getMl() {
    return ml;
}
void Cosmetic::setMl(QString m) {
    ml = m;
}
