#include <QCoreApplication>
#include <QDebug>

#include "crosstools.h"

class A
{
public:
    A(){}
    virtual ~A(){}
    virtual int getInt(){return 10;}
};

class B: public A
{
public:
    B(){}
    virtual ~B(){}
    virtual int getInt(){return 100;}
    virtual double getDouble(){return 1000;}
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    DLOG("Test");
    A* test = new B;
    DLOG(test->getInt());
    DLOG(dynamic_cast<B*>(test)->getDouble());
    return a.exec();
}
