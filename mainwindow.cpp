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
        load_settings_user();
        settings_tables();
        init_signals();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::init_signals()
{
    connect(ui->pushButton_find,SIGNAL(clicked(bool)),SLOT(find_patients()));
}
void MainWindow::settings_tables()
{
    m_main_table_model = new m_main_table;
    m_main_table_model->setTable("");
}
void MainWindow::load_settings_user()
{
    Objects_app obj;
    ui->pushButton_add->setEnabled(obj.app_user_rights[1]);
}
void MainWindow::load_setting_find()
{
    ui->comboBox_search_param->addItem("ФИО",0);
    ui->comboBox_search_param->addItem("Дата Рождения",1);
    //ui->comboBox_search_param->addItem()
}
void MainWindow::find_patients()
{
    QString line = ui->lineEdit_search_string->text();
    switch (ui->comboBox_search_param->currentData().toInt()) {
    case 0:
        m_main_table_model->setFilter("fio ILIKE '%"+line+"%'");
        break;
    case 1:
        m_main_table_model->setFilter("birthday ILIKE '%"+line+"%'");
        break;
    default:

        break;
    }
}
void MainWindow::load_table_patients()
{
    m_main_table_model->select();
}
