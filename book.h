#ifndef BOOK_H
#define BOOK_H
#include "commidity.h"

class Book : public Commidity {
private:
    QString writer;
    QString publisher;
public:
    Book();
    QString getWriter();
    void setWriter(QString w);
    QString getPublisher();
    void setPublisher(QString p);
};

#endif // BOOK_H
