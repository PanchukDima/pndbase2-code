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
    else
    {
        this->showMaximized();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::closeEvent(QCloseEvent *event)
{

}
void MainWindow::settings_tables()
{

}
void MainWindow::load_setting_find()
{
    ui->comboBox_search_param->addItem("ФИО".0);
    ui->comboBox_search_param->addItem("Дата Рождения",1);
    //ui->comboBox_search_param->addItem()
}
void MainWindow::find_patients()
{
    switch (ui->comboBox_search_param->currentData().toInt()) {
    case 0:

        break;
    case 1:

        break;
    default:

        break;
    }
}
void MainWindow::load_table_patients()
{

}
