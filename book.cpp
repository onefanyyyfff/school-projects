#include "book.h"

Book::Book()
{
    writer = "0";
    publisher = "0";
}
QString Book::getWriter() {
    return writer;
}
void Book::setWriter(QString w) {
    writer = w;
}
QString Book::getPublisher() {
    return publisher;
}
void Book::setPublisher(QString p) {
    publisher = p;
}
