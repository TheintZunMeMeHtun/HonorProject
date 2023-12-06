#ifndef MENWINDOW_H
#define MENWINDOW_H

#include <QDialog>

namespace Ui {
class menwindow;
}

class menwindow : public QDialog
{
    Q_OBJECT

public:
    explicit menwindow(QWidget *parent = nullptr);
    ~menwindow();

private slots:

    void on_pushButton_backhome_clicked();

private:
    Ui::menwindow *ui;
signals:
    void showHomepage();


};

#endif // MENWINDOW_H
