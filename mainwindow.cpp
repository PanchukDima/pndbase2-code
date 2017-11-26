#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPndCore core;
    Objects_app::local_path obj;
    obj.putty_path = "testtsad";
    core.analizes_add();


}

MainWindow::~MainWindow()
{
    delete ui;
}
