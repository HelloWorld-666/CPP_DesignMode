#include "Observer.h"

void ConcreteObserverA::Update(float price)
{
    cout << "price:" << price << endl;
}

ConcreteSubject::ConcreteSubject()
{
    m_fPrice = 5.5;
}

void ConcreteSubject::Attach(Observer* obs)
{
    m_observer.push_back(obs);
}

void ConcreteSubject::Detach(Observer* obs)
{
    m_observer.remove(obs);
}

void ConcreteSubject::Notify()
{
    list<Observer*>::iterator iter = m_observer.begin();
    for (; iter != m_observer.end(); iter++)
    {
        (*iter)->Update(m_fPrice);                                  //取目标对象的地址解引用
    }
}

void ConcreteSubject::SetState(float price)
{
    m_fPrice = price;                                               //状态发生变化
}

float ConcreteSubject::GetState()
{
    return m_fPrice;
}

int main()
{
    ConcreteSubject*   cs = new ConcreteSubject();                  //创建被观察对象
    ConcreteObserverA* c1 = new ConcreteObserverA();                //创建观察者1
    ConcreteObserverA* c2 = new ConcreteObserverA();                //创建观察者2

    cs->Attach(c1);                                                 //cs对象中注册观察者  
    
    //只有状态发生变化(SetStat)时，才会通知(Notify)观察者，否则不需要通知
    cs->SetState(9.99);                                             //设定状态值
    cs->Notify();                                                   //通知cs对象的所有观察者

    cs->Attach(c2);

    cs->SetState(16.6);
    cs->Notify();                                                   //此处Notify直接通知了观察者c1和c2，所以在Notify()函数中的list容器遍历了两个观察者，打印两次16.6
    
    cs->Detach(c1);                                                 //移除观察者

    getchar();
    return 0;
}

/*
    https://blog.csdn.net/liang19890820/article/details/61925314

    观察者模式（Observer Pattern），定义了对象间的一对多的依赖关系，让多个观察者对象同时监听某一个主题对象（被观察者）。当主题对象的状态发生更改时，会通知所有观察者，让它们能够自动更新

    可以看到ConcreteSubject类中有一个观察者链表（list），当ConcreteSubject类中状态发生变化(SetStat(price))时，通过Notify()成员函数通知所有的观察者，告诉他们状态更新了。而观察者通过Notify中的Update()成员函数获取博客最新的状态信息

    SetStat(price) ---> m_fPrice = price ---> Notify()通知观察者A ---> Update()进行一系列更新状态操作(同步)
*/
