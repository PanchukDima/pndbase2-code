#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Core/qpndcore.h>
#include <Core/DialogSorWindow/Auth/d_auth.h>
#include <QDebug>
#include <QMessageBox>
#include <QCloseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
public slots:
    void load_setting_find();
    void find_patients();
    void settings_tables();
    void load_table_patients();
};

#endif // MAINWINDOW_H
