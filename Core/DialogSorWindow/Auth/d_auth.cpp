#include "d_auth.h"
#include "ui_d_auth.h"

D_auth::D_auth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::D_auth)
{
    ui->setupUi(this);
    get_username_os();
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
    QString name = qgetenv("USER");
            if (name.isEmpty())
            {
                name = qgetenv("USERNAME");
            }

            ui->lineEdit_login->setText(name);
            ui->lineEdit_password->setFocus();
}
void D_auth::sign_in()
{

}

