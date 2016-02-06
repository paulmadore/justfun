#include "justfun.h"
#include "ui_justfun.h"

JustFun::JustFun(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::JustFun)
{
    ui->setupUi(this);
}

JustFun::~JustFun()
{
    delete ui;
}
