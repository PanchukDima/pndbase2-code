#ifndef W_DYNAMIC_VIEW_H
#define W_DYNAMIC_VIEW_H

#include <QMainWindow>

namespace Ui {
class W_Dynamic_view;
}

class W_Dynamic_view : public QMainWindow
{
    Q_OBJECT

public:
    explicit W_Dynamic_view(QWidget *parent = 0);
    ~W_Dynamic_view();

private:
    Ui::W_Dynamic_view *ui;
};

#endif // W_DYNAMIC_VIEW_H
