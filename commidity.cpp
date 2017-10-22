#include "commidity.h"

Commidity::Commidity() {
    coName = "";
    coPrice = "";
    coCatagory = "";
    coStorage = 0;
    coBuyer = "";//已有x人购买
    coDescrip = "";//商品相关描述
    coSeller = "";
    coDiscount = "";
};
QString Commidity::getcoName() {
    return coName;
};
void Commidity::setcoName(QString name) {
    coName = name;
};
QString Commidity::getcoPrice() {
    return coPrice;
};
void Commidity::setcoPrice(QString price) {
    coPrice = price;
};
QString Commidity::getcoCatagory() {
    return coCatagory;
};
void Commidity::setcoCatagory(QString cata) {
    coCatagory = cata;
};
int Commidity::getcoStorage() {
    return coStorage;
};
void Commidity::setcoStorage(int num) {
    coStorage = num;
};
QString Commidity::getcoBuyer() {
    return coBuyer;
};
void Commidity::setcoBuyer(QString buyer) {
    coBuyer = buyer;
};
QString Commidity::getcoDescript() {
    return coDescrip;
};
void Commidity::setcoDescript(QString des) {
    coDescrip = des;
};
QString Commidity::getcoSeller() {
    return coSeller;
};
void Commidity::setcoSeller(QString seller) {
    coSeller = seller;
};
QString Commidity::getcoDiscount() {
    return coDiscount;
};
void Commidity::setcoDiscount(QString disc) {
    coDiscount = disc;
};
