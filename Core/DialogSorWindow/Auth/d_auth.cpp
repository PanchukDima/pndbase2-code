#include "d_auth.h"
#include "ui_d_auth.h"

D_auth::D_auth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::D_auth)
{
    ui->setupUi(this);
    QPndCore core;
    get_username_os();
    connect(ui->pushButton_settings,SIGNAL(clicked()),SLOT(server_settings()));
    connect(ui->pushButton_sign,SIGNAL(clicked(bool)),SLOT(sign_in()));
    connect(ui->pushButton_cancel,SIGNAL(clicked(bool)),SLOT(close()));
}

D_auth::~D_auth()
{
    delete ui;
}

bool D_auth::server_settings()
{
    QPndCore core;
    core.settings_app();
}
void D_auth::get_username_os()
{
    Objects_app obj;

            ui->lineEdit_login->setText(obj.os_username);
            ui->lineEdit_password->setFocus();
            ui->lineEdit_login->setText("panch-dima");

}
void D_auth::sign_in()
{
    messages_app mess;
    QPndCore core;
    Objects_app obj;

    obj.server_bd_username = ui->lineEdit_login->text();
    obj.server_bd_password = ui->lineEdit_password->text();


    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL","main");
    db.setHostName(obj.server_bd_ip_address);
    db.setPort(obj.server_bd_port);
    db.setDatabaseName(obj.server_bd_database_patients);
    db.setUserName(obj.server_bd_username);
    db.setPassword(obj.server_bd_password);
    //core.check_cert();
    if(db.open())
    {
        this->accept();
    }
    else
    {
        ui->label_3->setText("Неправильный логин или пароль");
        qDebug()<<db.lastError();
    }

}

