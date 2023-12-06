#include "womenwindow.h"
#include "homepage.h"
#include "ui_womenwindow.h"
#include "productdetails.h"
#include <QPixmap>

womenwindow::womenwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::womenwindow)
{
    ui->setupUi(this);
    QPixmap pic("/Users/theintzun/Downloads/EcoWardrobe-01.jpg");
    ui->label->setPixmap(pic);

    QPixmap pic1("/Users/theintzun/Downloads/001e6bebf2df713d705b25bd3270c71d.jpg");
    ui->label_2->setPixmap(pic1);

    QPixmap pic2("/Users/theintzun/Downloads/1f1e4442b2594cbc25f3065774164cf1.jpg");
    ui->label_3->setPixmap(pic2);

    QPixmap pic3("/Users/theintzun/Downloads/664dd156a9407eea77d86876c8b4b63b.jpg");
    ui->label_4->setPixmap(pic3);

    QPixmap pic4("/Users/theintzun/Downloads/b922d09e087ac572ba08e4ea8483e02e.jpg");
    ui->label_5->setPixmap(pic4);

    QPixmap pic5("/Users/theintzun/Downloads/805b963b71e40a6fcfde0ac2886248ed.jpg");
    ui->label_6->setPixmap(pic5);

    QPixmap pic6("/Users/theintzun/Downloads/4076f4a1ec30f71ebeca89a220c914ad.jpg");
    ui->label_7->setPixmap(pic6);

    QPixmap pic7("/Users/theintzun/Downloads/a314d4035d0ea2d0e052d931ba28f613.jpg");
    ui->label_8->setPixmap(pic7);

    QPixmap pic8("/Users/theintzun/Downloads/d553b51375fcd1ddb88f39286b4308bd.jpg");
    ui->label_9->setPixmap(pic8);

    QPixmap pic9("/Users/theintzun/Downloads/23396e776a2991aaa159de8a1ca8bea1.jpg");
    ui->label_10->setPixmap(pic9);
}

womenwindow::~womenwindow()
{
    delete ui;
}

void womenwindow::on_pushButton_backhome_clicked()
{
    Homepage home;
    home.setModal(true);
    emit showHomepage();
    this->close();
    home.exec();
}


void womenwindow::on_pushButton_2_plaidshirtdetails_clicked()
{
    productdetails details;
    details.setModal(true);
    emit showproductdetails();
    this->close();
    details.exec();

}

