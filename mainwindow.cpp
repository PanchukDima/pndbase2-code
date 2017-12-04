#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Objects_app obj;
    obj.local_path_settings = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QPndCore core;
    core.init_core();

    D_auth auth;

    if(!auth.exec())
    {
        exit(0);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
