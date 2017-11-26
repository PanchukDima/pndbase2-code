#ifndef TEST_H
#define TEST_H

#include <QObject>
namespace Core {


class app : public QObject
{
    Q_OBJECT
public:
    explicit app(QObject *parent = nullptr);

signals:

public slots:
};
class user : public QObject
{
    Q_OBJECT
public:
    explicit user(QObject *parent = nullptr);

signals:

public slots:
};

}

#endif // TEST_H
