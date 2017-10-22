#include "electric.h"

Electric::Electric()
{
    memory = "0";
    HD = "0";
}
QString Electric::getMemory() {
    return memory;
}
void Electric::setMemory(QString m) {
    memory = m;
}
QString Electric::getHD() {
    return memory;
}
void Electric::setHD(QString h) {
    HD = h;
}
