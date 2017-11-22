#ifndef D_AUTH_H
#define D_AUTH_H

#include <QDialog>

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
};

#endif // D_AUTH_H
