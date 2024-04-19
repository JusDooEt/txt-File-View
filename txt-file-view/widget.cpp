#include "widget.h"
#include "./ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    fileView = new FileView(this);

    /*= Debugging and Test Functions =========
    fileView->testList(QDir::currentPath());
    fileView->testModify(QDir::currentPath());
    ========================================*/
}

Widget::~Widget()
{
    delete ui;
}
