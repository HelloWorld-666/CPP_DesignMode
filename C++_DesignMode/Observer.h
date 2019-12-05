#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

class Observer
{
public:
    virtual void Update(float price) = 0;
};

class Subject      //被观察对象
{
public:
    virtual void Attach(Observer* obs) = 0;
    virtual void Detach(Observer* obs) = 0;
    virtual void Notify() = 0;
    //virtual void Notify(Observer* obs) = 0;           //错误
};

class ConcreteObserverA : public Observer               //相当于“关注博客的人”
{
public:
    void Update(float price);
};

class ConcreteSubject : public Subject                  //相当于“博客”，一旦变化，关注该博客的人会受到通知
{
public:
    ConcreteSubject();

    void  Attach(Observer* obs);
    void  Detach(Observer* obs);
    void  Notify();
    void  SetState(float price);
    float GetState();

private:
    list<Observer*> m_observer;         //观察者列表
    float           m_fPrice;           //价格
};
