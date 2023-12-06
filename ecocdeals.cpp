#include "ecocdeals.h"
#include "homepage.h"
#include "ui_ecocdeals.h"


Ecocdeals::Ecocdeals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ecocdeals)
{
    ui->setupUi(this);
    QPixmap pic("/Users/theintzun/Downloads/EcoWardrobe-01.jpg");
    ui->label->setPixmap(pic);

    QPixmap pic1("/Users/theintzun/Downloads/451ac9ac6fd294b8b929a010958f75fa.jpg");
    ui->label_2->setPixmap(pic1);

    QPixmap pic2("/Users/theintzun/Downloads/Holiday Outfit Inspo | TheChicBee.jpg");
    ui->label_3->setPixmap(pic2);

    QPixmap pic3("/Users/theintzun/Downloads/11d6593bcf145713b4075a9e5e1277b5.jpg");
    ui->label_4->setPixmap(pic3);

    QPixmap pic4("/Users/theintzun/Downloads/2a598b6e11e2cf1c4b82d990e3eea52e.jpg");
    ui->label_5->setPixmap(pic4);

    QPixmap pic5("/Users/theintzun/Downloads/c7e74cc33b0dd999facd9c5daaae20db.jpg");
    ui->label_6->setPixmap(pic5);

    QPixmap pic6("/Users/theintzun/Downloads/c8b56d710082c962ce63b3cc3a2487fd.jpg");
    ui->label_7->setPixmap(pic6);

    QPixmap pic7("/Users/theintzun/Downloads/e68255c15b0da250028cd7c70269290f.jpg");
    ui->label_8->setPixmap(pic7);

    QPixmap pic8("/Users/theintzun/Downloads/1774728327e8e8e4c375390ab856c85b.jpg");
    ui->label_9->setPixmap(pic8);

    QPixmap pic9("/Users/theintzun/Downloads/12e8d30cbb894db62e33a54666ca7464.jpg");
    ui->label_10->setPixmap(pic9);
}

Ecocdeals::~Ecocdeals()
{
    delete ui;
}



void Ecocdeals::on_pushButton_backhome_clicked()
{
    Homepage home;
    home.setModal(true);
    emit showHomepage();
    this->close();
    home.exec();
}

