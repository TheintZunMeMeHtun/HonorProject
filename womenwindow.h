#ifndef WOMENWINDOW_H
#define WOMENWINDOW_H

#include <QDialog>

namespace Ui {
class womenwindow;
}

class womenwindow : public QDialog
{
    Q_OBJECT

public:
    explicit womenwindow(QWidget *parent = nullptr);
    ~womenwindow();

private slots:
    void on_pushButton_backhome_clicked();

    void on_pushButton_2_plaidshirtdetails_clicked();

private:
    Ui::womenwindow *ui;
signals:
    void showHomepage();
    void showproductdetails();

};

#endif // WOMENWINDOW_H
