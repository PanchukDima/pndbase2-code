#ifndef D_AUTH_H
#define D_AUTH_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <Core/qpndcore.h>

namespace Ui {
class D_auth;
}

class D_auth : public QDialog
{
    Q_OBJECT

public:
    explicit D_auth(QWidget *parent = 0);
    ~D_auth();

private:
    Ui::D_auth *ui;
public slots:
    bool server_settings();
    void get_username_os();
    void sign_in();

};

#endif // D_AUTH_H
