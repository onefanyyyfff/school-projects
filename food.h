#ifndef FOOD_H
#define FOOD_H
#include "commidity.h"

class Food : public Commidity {
private:
    QString date;
    int tasty;//2是香甜，3是原味，4是咸香，5是香辣
public:
    Food();
    QString getDate();
    void setDate(QString time);
    int getTasty();
    void setTasty(int t);
};

#endif // FOOD_H
