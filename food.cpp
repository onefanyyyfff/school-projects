#include "food.h"

Food::Food()
{
    date = "0";
    tasty = 2;
}
QString Food::getDate() {
    return date;
}
void Food::setDate(QString time) {
    date = time;
}
int Food::getTasty() {
    return tasty;
}
void Food::setTasty(int t) {
    tasty = t;
}
