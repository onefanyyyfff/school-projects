#ifndef COMMIDITY_H
#define COMMIDITY_H
#include<QString>

class Commidity {
private:
    QString coName;//商品名
    QString coPrice;//商品价格
    QString coCatagory;//商品类别
    int coStorage;//库存
    QString coBuyer;//已有x人购买
    QString coDescrip;//商品相关描述
    QString coSeller;//卖家
    QString coDiscount;//折扣活动
public:
    Commidity();
    QString getcoName();
    void setcoName(QString name);
    QString getcoPrice();
    void setcoPrice(QString price);
    QString getcoCatagory();
    void setcoCatagory(QString cata);
    int getcoStorage();
    void setcoStorage(int num);
    QString getcoBuyer();
    void setcoBuyer(QString buyer);
    QString getcoDescript();
    void setcoDescript(QString des);
    QString getcoSeller();
    void setcoSeller(QString seller);
    QString getcoPlace();
    void setcoPlace(QString place);
    QString getcoDiscount();
    void setcoDiscount(QString disc);
};

#endif // COMMIDITY_H
