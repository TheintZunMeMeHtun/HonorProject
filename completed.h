#ifndef COMPLETED_H
#define COMPLETED_H

#include <QDialog>

namespace Ui {
class completed;
}

class completed : public QDialog
{
    Q_OBJECT

public:
    explicit completed(QWidget *parent = nullptr);
    ~completed();

private slots:

    void on_pushButton_home_clicked();

signals:
    void showHomepage();

private:
    Ui::completed *ui;
};

#endif // COMPLETED_H
