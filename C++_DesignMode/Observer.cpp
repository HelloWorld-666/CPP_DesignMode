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
        (*iter)->Update(m_fPrice);                                  //ȡĿ�����ĵ�ַ������
    }
}

void ConcreteSubject::SetState(float price)
{
    m_fPrice = price;                                               //״̬�����仯
}

float ConcreteSubject::GetState()
{
    return m_fPrice;
}

int main()
{
    ConcreteSubject*   cs = new ConcreteSubject();                  //�������۲����
    ConcreteObserverA* c1 = new ConcreteObserverA();                //�����۲���1
    ConcreteObserverA* c2 = new ConcreteObserverA();                //�����۲���2

    cs->Attach(c1);                                                 //cs������ע��۲���  
    
    //ֻ��״̬�����仯(SetStat)ʱ���Ż�֪ͨ(Notify)�۲��ߣ�������Ҫ֪ͨ
    cs->SetState(9.99);                                             //�趨״ֵ̬
    cs->Notify();                                                   //֪ͨcs��������й۲���

    cs->Attach(c2);

    cs->SetState(16.6);
    cs->Notify();                                                   //�˴�Notifyֱ��֪ͨ�˹۲���c1��c2��������Notify()�����е�list���������������۲��ߣ���ӡ����16.6
    
    cs->Detach(c1);                                                 //�Ƴ��۲���

    getchar();
    return 0;
}

/*
    https://blog.csdn.net/liang19890820/article/details/61925314

    �۲���ģʽ��Observer Pattern���������˶�����һ�Զ��������ϵ���ö���۲��߶���ͬʱ����ĳһ��������󣨱��۲��ߣ�������������״̬��������ʱ����֪ͨ���й۲��ߣ��������ܹ��Զ�����

    ���Կ���ConcreteSubject������һ���۲�������list������ConcreteSubject����״̬�����仯(SetStat(price))ʱ��ͨ��Notify()��Ա����֪ͨ���еĹ۲��ߣ���������״̬�����ˡ����۲���ͨ��Notify�е�Update()��Ա������ȡ�������µ�״̬��Ϣ

    SetStat(price) ---> m_fPrice = price ---> Notify()֪ͨ�۲���A ---> Update()����һϵ�и���״̬����(ͬ��)
*/
