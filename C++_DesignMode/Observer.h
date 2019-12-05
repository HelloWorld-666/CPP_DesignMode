#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

class Observer
{
public:
    virtual void Update(float price) = 0;
};

class Subject      //���۲����
{
public:
    virtual void Attach(Observer* obs) = 0;
    virtual void Detach(Observer* obs) = 0;
    virtual void Notify() = 0;
    //virtual void Notify(Observer* obs) = 0;           //����
};

class ConcreteObserverA : public Observer               //�൱�ڡ���ע���͵��ˡ�
{
public:
    void Update(float price);
};

class ConcreteSubject : public Subject                  //�൱�ڡ����͡���һ���仯����ע�ò��͵��˻��ܵ�֪ͨ
{
public:
    ConcreteSubject();

    void  Attach(Observer* obs);
    void  Detach(Observer* obs);
    void  Notify();
    void  SetState(float price);
    float GetState();

private:
    list<Observer*> m_observer;         //�۲����б�
    float           m_fPrice;           //�۸�
};
