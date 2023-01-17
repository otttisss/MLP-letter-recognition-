#ifndef DRAWINGWINDOW_H
#define DRAWINGWINDOW_H

#include <QDialog>
#include "paintwidgets.h"

namespace Ui {
class drawingwindow;
}

class drawingwindow : public QDialog
{
    Q_OBJECT

public:
    explicit drawingwindow(QWidget *parent = nullptr);
    ~drawingwindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::drawingwindow *ui;
    QPaintWidget *widget;
};

#endif // DRAWINGWINDOW_H