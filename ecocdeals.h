#ifndef ECOCDEALS_H
#define ECOCDEALS_H

#include <QDialog>

namespace Ui {
class Ecocdeals;
}

class Ecocdeals : public QDialog
{
    Q_OBJECT

public:
    explicit Ecocdeals(QWidget *parent = nullptr);
    ~Ecocdeals();

private slots:

    void on_pushButton_backhome_clicked();

private:
    Ui::Ecocdeals *ui;

signals:
    void showHomepage();

};

#endif // ECOCDEALS_H
