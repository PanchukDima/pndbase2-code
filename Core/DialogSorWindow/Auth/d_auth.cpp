#include "d_auth.h"
#include "ui_d_auth.h"

D_auth::D_auth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::D_auth)
{
    ui->setupUi(this);
    QPndCore core;
    get_username_os();
    core.check_cert();
    connect(ui->pushButton_settings,SIGNAL(clicked()),SLOT(server_settings()));
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
    Objects_app::os obj;
            ui->lineEdit_login->setText(obj.username);
            ui->lineEdit_password->setFocus();
}
void D_auth::sign_in()
{
    messages_app mess;
    Objects_app::server_bd_patients obj;
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName(obj.ip_address);
    db.setPort(obj.port);
    db.setUserName(obj.username);
    db.setPassword(ui->lineEdit_password->text());
    db.setDatabaseName(obj.database);
    if(db.open())
    {
        this->accept();
    }
    else
    {
        ui->label_3->setText("Неправильный логин или пароль");
    }

}

