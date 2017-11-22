#include "w_dynamic_view.h"
#include "ui_w_dynamic_view.h"

W_Dynamic_view::W_Dynamic_view(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::W_Dynamic_view)
{
    ui->setupUi(this);
}

W_Dynamic_view::~W_Dynamic_view()
{
    delete ui;
}
