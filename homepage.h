#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QDialog>


namespace Ui {
class Homepage;
}

class Homepage : public QDialog
{
    Q_OBJECT

public:
    explicit Homepage(QWidget *parent = nullptr);
    ~Homepage();

private slots:
    void on_pushButton_men_clicked();

    void on_pushButton_2_Women_clicked();

    void on_pushButton_3_EcoCDeals_clicked();

    void on_pushButton_4_Christmasdeals_clicked();

private:
    Ui::Homepage *ui;

signals:
    void closeWindow();

};

#endif // HOMEPAGE_H
