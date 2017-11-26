#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPndCore core;
    Objects_app::local_path obj;
    D_auth auth;
    obj.path_settings = QApplication::applicationDirPath();
    core.init_core();
    if(!auth.exec())
    {
        exit(0);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
