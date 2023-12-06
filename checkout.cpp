#include "checkout.h"
#include "ui_checkout.h"
#include "completed.h"
#include "productdetails.h"
#include "homepage.h"
#include <Qpixmap>

checkout::checkout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkout)
{
    ui->setupUi(this);
    QPixmap pic("/Users/theintzun/Downloads/EcoWardrobe-01.jpg");
    ui->label->setPixmap(pic);

    QPixmap pic1("/Users/theintzun/Downloads/001e6bebf2df713d705b25bd3270c71d.jpg");
    ui->label_10->setPixmap(pic1);

    QPixmap pic2("/Users/theintzun/Downloads/04381104d75831ebbf960402d4f6dd5b.jpg");
    ui->label_2->setPixmap(pic2);

    QPixmap pic3("/Users/theintzun/Downloads/b8c855704e5b14977555056fa35b2f89.jpg");
    ui->label_18->setPixmap(pic3);
}

checkout::~checkout()
{
    delete ui;
}

void checkout::on_pushButton_cancel_clicked()
{
    productdetails product;
    product.setModal(true);
    emit showproductdetails();
    this->close();
    product.exec();
}


void checkout::on_pushButton_placeorder_clicked()
{
    completed order;
    order.setModal(true);
    emit showcheckout();
    this->close();
    order.exec();
}


void checkout::on_pushButton_4_clicked()
{
    Homepage home;
    home.setModal(true);
    emit showHomepage();
    this->close();
    home.exec();
}

