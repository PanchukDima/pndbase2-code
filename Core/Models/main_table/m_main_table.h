#ifndef M_MAIN_TABLE_H
#define M_MAIN_TABLE_H

#include <QObject>
#include <QSqlTableModel>

class m_main_table : public QSqlTableModel
{
    Q_OBJECT
public:
    explicit m_main_table(QObject *parent = 0);

signals:

public slots:
};

#endif // M_MAIN_TABLE_H
