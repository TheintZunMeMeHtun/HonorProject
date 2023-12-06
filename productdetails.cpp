#include "productdetails.h"
#include "ui_productdetails.h"
#include "womenwindow.h"
#include "checkout.h"
#include "homepage.h"
#include <Qpixmap>
#include <QLabel>
#include <QVBoxLayout>

productdetails::productdetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::productdetails),
    quantity(0)
{
    ui->setupUi(this);
    QPixmap pic("/Users/theintzun/Downloads/EcoWardrobe-01.jpg");
    ui->label->setPixmap(pic);

    QPixmap pic1("/Users/theintzun/Downloads/04381104d75831ebbf960402d4f6dd5b.jpg");
    ui->Label_number->setPixmap(pic1);

    QPixmap pic2("/Users/theintzun/Downloads/001e6bebf2df713d705b25bd3270c71d.jpg");
    ui->label_2->setPixmap(pic2);

    QPixmap pic3("/Users/theintzun/Downloads/9eb31f1397aa013972c607f8d38923fd.jpg");
    ui->label_4->setPixmap(pic3);

     connect(ui->pushButton_home, &QPushButton::clicked, this, &productdetails::on_pushButton_AddToCart_clicked);

    priceAmount += quantity * 18; // Multiply the quantity by the price per item ($18) and add to the cart


    ui->label_priceAmount->setText("$" + QString::number(priceAmount));

    ui->label_number->setText(QString::number(quantity));
}

productdetails::~productdetails()
{
    delete ui;
}

void productdetails::on_pushButton_6_clicked()
{
    womenwindow women;
    women.setModal(true);
    emit showwomenwindow();
    this->close();
    women.exec();

}


void productdetails::on_pushButton_7_clicked()
{
    checkout product;
    product.setModal(true);
    emit showcheckout();
    this->close();
    product.exec();
}


void productdetails::on_pushButton_plus_clicked()
{
    qDebug() << "Plus clicked. Current quantity:" << quantity;
    quantity++;
    priceAmount += 18;
    ui->label_priceAmount->setText("$" + QString::number(priceAmount));
    ui->label_number->setText(QString::number(quantity));
}



void productdetails::on_pushButton_minus_clicked()
{
    qDebug() << "Minus clicked. Current quantity:" << quantity;
    if (quantity > 0)
    {
        quantity--;
        priceAmount -= 18;
        if(priceAmount < 0) priceAmount = 0;
        ui->label_priceAmount->setText("$" + QString::number(priceAmount));
        ui->label_number->setText(QString::number(quantity));
    }
}



void productdetails::on_pushButton_home_clicked()
{
    Homepage home;
    home.setModal(true);
    emit showHomepage();
    this->close();
    home.exec();
}


void productdetails::on_pushButton_AddToCart_clicked()
{
    priceAmount += 1;
    priceAmount += quantity * 18;

    ui->label_priceAmount->setText("$" + QString::number(priceAmount));
    ui->label_number->setText(QString::number(quantity));
}

