#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPndCore core;
    Objects_app::local_path obj;
    obj.path_settings = QApplication::applicationDirPath();
    core.init_core();
}

MainWindow::~MainWindow()
{
    delete ui;
}
