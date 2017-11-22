#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPndCore core;
    core.dynamic_view_add();

}

MainWindow::~MainWindow()
{
    delete ui;
}
