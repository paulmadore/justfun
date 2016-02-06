#ifndef JUSTFUN_H
#define JUSTFUN_H

#include <QMainWindow>

namespace Ui {
class JustFun;
}

class JustFun : public QMainWindow
{
    Q_OBJECT

public:
    explicit JustFun(QWidget *parent = 0);
    ~JustFun();

private:
    Ui::JustFun *ui;
};

#endif // JUSTFUN_H
