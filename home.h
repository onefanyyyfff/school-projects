#ifndef HOME_H
#define HOME_H
#include <QWidget>
#include <QLabel>
namespace Ui {
class Home;
}

class Home : public QWidget
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = 0);
    ~Home();
public slots:
    void scrollCaption();
private slots:

private:
    Ui::Home *ui;
    QLabel *m_pLabel;
};

#endif // HOME_H
