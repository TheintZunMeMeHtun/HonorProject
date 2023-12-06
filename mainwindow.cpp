#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "homepage.h"  // Ensure this include is correct
#include <QMessageBox>
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap logo("/Users/theintzun/Downloads/EcoWardrobe-01.jpg");
    ui->label_2_Logo->setPixmap(logo);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Sign_in_clicked()
{
    QString Name = ui->lineEdit_Name->text();
    QString Email = ui->lineEdit_2_Email->text();
    QString Password = ui->lineEdit_3_Password->text();

    if(Name == "t" && Email == "t" && Password == "t")
    {
        QMessageBox::information(this, "Sign up Successful", "Your account have been successfully created.");


        Homepage *homepageWindow = new Homepage(this);
        homepageWindow->show();
        this->hide();
    }
    else
    {
        QMessageBox::warning(this, "Login Failed", "The username, email, or password is incorrect.");
    }
}
