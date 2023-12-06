#include "completed.h"
#include "homepage.h"
#include "ui_completed.h"

completed::completed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::completed)
{
    ui->setupUi(this);
    QPixmap pic("/Users/theintzun/Downloads/EcoWardrobe-01.jpg");
    ui->label_3->setPixmap(pic);
}

completed::~completed()
{
    delete ui;
}

void completed::on_pushButton_home_clicked()
{
    Homepage home;
    home.setModal(true);
    emit showHomepage();
    this->close();
    home.exec();
}

