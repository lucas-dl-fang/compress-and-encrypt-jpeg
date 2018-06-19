#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QFileDialog>
#include <QDebug>
#include "simpleBMP.h"
#include <string>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void compressImg();

private slots:
    void on_pushButton_clicked();

    //compress
    void on_pushButton_2_clicked();

private:
    Ui::Widget *ui;
    ClImgBMP img;
    std::string fileName;
    const char* fileName_t;

};

#endif // WIDGET_H
