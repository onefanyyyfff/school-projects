#ifndef REGLOG_H
#define REGLOG_H
#include <QPainter>
#include <QWidget>
class Home;
namespace Ui {
class reglog;
}

class reglog : public QWidget
{
    Q_OBJECT

public:
    explicit reglog(QWidget *parent = 0);
    ~reglog();
signals:
    void toHomewindow();
public slots:
    void on_logButton_clicked();
    void openHome();
private slots:
    void on_logExitButton_clicked();

    void on_regButton_clicked();

    void on_regExitButton_clicked();

private:
    Ui::reglog *ui;
    Home *home;
};

#endif // REGLOG_H

