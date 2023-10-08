#include "newongle.h"
#include "ui_newongle.h"

Newongle::Newongle(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Newongle)
{
    ui->setupUi(this);
}

Newongle::~Newongle()
{
    delete ui;
}
