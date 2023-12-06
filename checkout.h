#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <QDialog>
#include <Qlabel>
#include <QPushButton>

namespace Ui {
class checkout;
}

class checkout : public QDialog
{
    Q_OBJECT

public:
    explicit checkout(QWidget *parent = nullptr);
    ~checkout();

private slots:

    void on_pushButton_cancel_clicked();
    void on_pushButton_placeorder_clicked();
    void on_pushButton_4_clicked();

signals:
    void showproductdetails();
    void showcheckout();
    void showHomepage();
private:
    Ui::checkout *ui;
};

#endif // CHECKOUT_H
