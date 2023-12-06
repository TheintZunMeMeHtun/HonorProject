#include "menwindow.h"
#include "ui_menwindow.h"
#include "homepage.h"
#include <QPixmap>

menwindow::menwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menwindow)
{
    ui->setupUi(this);
    QPixmap pic("/Users/theintzun/Downloads/EcoWardrobe-01.jpg");
    ui->label_19_logo->setPixmap(pic);

    QPixmap pic1("/Users/theintzun/Downloads/e0144affc973c380da2e8c8db3a44977.jpg");
    ui->label_2_pic2->setPixmap(pic1);

    QPixmap pic2("/Users/theintzun/Downloads/c97ab3281066908cd539c99bef718659.jpg");
    ui->label_3_pic3->setPixmap(pic2);

    QPixmap pic3("/Users/theintzun/Downloads/a30ee6cab380a293e979792c22a3f1ac.jpg");
    ui->label_4_pic3->setPixmap(pic3);

    QPixmap pic4("/Users/theintzun/Downloads/3def5b143e1843ad235e7142f0a75188.jpg");
    ui->label_5_pic5->setPixmap(pic4);

    QPixmap pic5("/Users/theintzun/Downloads/638a8ede330061c98707a91e8e841946.jpg");
    ui->label_6_pic6->setPixmap(pic5);

    QPixmap pic6("/Users/theintzun/Downloads/9b6b06c404313e1c7b883a8e10bd895a.jpg");
    ui->label_7_pic7->setPixmap(pic6);

    QPixmap pic7("/Users/theintzun/Downloads/85f4e0b53e13f9b421fa0fde0fb0b0ff.jpg");
    ui->label_12->setPixmap(pic7);

    QPixmap pic8("/Users/theintzun/Downloads/dfd13f9be861851de821ce30d98fa992.jpg");
    ui->label_13->setPixmap(pic8);

    QPixmap pic9("/Users/theintzun/Downloads/0ecaeb06d693227fd363b879f977abbb.jpg");
    ui->label_14->setPixmap(pic9);
}

menwindow::~menwindow()
{
    delete ui;
}

void menwindow::on_pushButton_backhome_clicked()
{
    Homepage home;
    home.setModal(true);
    emit showHomepage();
    this->close();
    home.exec();
}

