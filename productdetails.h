#ifndef PRODUCTDETAILS_H
#define PRODUCTDETAILS_H

#include <QDialog>
#include <QScrollArea>
#include <QVBoxLayout>

namespace Ui {
class productdetails;
}

class productdetails : public QDialog
{
    Q_OBJECT

public:
    explicit productdetails(QWidget *parent = nullptr);
    ~productdetails();

private slots:
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_plus_clicked();
    void on_pushButton_minus_clicked();
    void on_pushButton_home_clicked();
    void on_pushButton_AddToCart_clicked();

signals:
    void showwomenwindow();
    void showcheckout();
    void showHomepage();

private:
    Ui::productdetails *ui;
    int quantity;
    int priceAmount = 0;

};

#endif // PRODUCTDETAILS_H
