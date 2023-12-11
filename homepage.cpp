#include "homepage.h"
#include "ui_homepage.h"
#include "menwindow.h"
#include "womenwindow.h"
#include "ecocdeals.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QScrollArea>
#include <QGridLayout>
#include <QPixmap>


Homepage::Homepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Homepage)

{
    ui->setupUi(this);
        QPixmap search("/Users/theintzun/Downloads/018428d1e3407a96da8665a62f85ca7e.jpg");
        ui->label_5_search->setPixmap(search);

        QPixmap pix("/Users/theintzun/Downloads/451ac9ac6fd294b8b929a010958f75fa.jpg");
        ui->label_2_pic1->setPixmap(pix);

        QPixmap pix1("/Users/theintzun/Downloads/c7e74cc33b0dd999facd9c5daaae20db.jpg");
    ui->label_3_pic3->setPixmap(pix1);

        QPixmap pix2("/Users/theintzun/Downloads/1774728327e8e8e4c375390ab856c85b.jpg");
    ui->label_4_pic4->setPixmap(pix2);

        QPixmap pix3("/Users/theintzun/Downloads/2ec6cb3f0a6d09b4b63dfb47d8b234f8.jpg");
    ui->label_5_pic5->setPixmap(pix3);

        QPixmap pix4("/Users/theintzun/Downloads/EcoWardrobe-01.jpg");
    ui->label_logo_2->setPixmap(pix4);

        QPixmap pix5("/Users/theintzun/Downloads/945d2d3715f0b727519aebca169cf585.jpg");
        ui->label_6pic6->setPixmap(pix5);

        QPixmap pix6("/Users/theintzun/Downloads/9fa0fda461b87091af1816a98f413438.jpg");
        ui->label_7pic7->setPixmap(pix6);

        QPixmap pix7("/Users/theintzun/Downloads/fashion-design-class.jpg");
        ui->label_8pic8->setPixmap(pix7);

        connect(this, &Homepage::closeWindow, this, &Homepage::close);
        menwindow *menWin = new menwindow(this);
        connect(menWin, &menwindow::showHomepage, this, &Homepage::show);
        womenwindow *womenWin = new womenwindow(this);
        connect(womenWin, &womenwindow::showHomepage, this, &Homepage::show);
        Ecocdeals *ecodeals = new Ecocdeals(this);
        connect(ecodeals, &Ecocdeals::showHomepage, this, &Homepage::show);
}

Homepage::~Homepage()
{
    delete ui;
}


void Homepage::on_pushButton_men_clicked()
{
    menwindow Men;
    Men.setModal(true);
    emit closeWindow();
    Men.exec();
}


void Homepage::on_pushButton_2_Women_clicked()
{
    womenwindow Women;
    Women.setModal(true);
    emit closeWindow();
    Women.exec();
}



void Homepage::on_pushButton_3_EcoCDeals_clicked()
{
    Ecocdeals deals;
    deals.setModal(true);
    emit closeWindow();
    deals.exec();
}


void Homepage::on_pushButton_4_Christmasdeals_clicked()
{
    Ecocdeals deals;
    deals.setModal(true);
    emit closeWindow();
    deals.exec();
}

