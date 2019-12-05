#include <stdio.h>
#include <iostream>
#include <string>               //cout ���string���ͱ���ʱ��Ҫ
#include <map>
#include <time.h>
#include <windows.h>            //sleep()

using namespace std;
/*--------------------------����������Ԫ��---------------------------------------*/
class Player
{
public:
    //Player();
    //~Player();
    virtual void AssignWeapon(string m_weapon) = 0;
    virtual void Mission() = 0;

protected:                      //�������ԣ����������಻�ܷ���
    string m_weapon;
    string m_mission;
};

/*--------------------------����������Ԫ��---------------------------------------*/
class T : public Player
{
public:
    T();
    //~T();
    void AssignWeapon(string weapon) override ;     //�ⲿ״̬��ÿ��T����ʹ�ò�ͬ�� weapon
    void Mission() override;                        //�ڲ�״̬��ÿ��T��Mission���� plant a bomb

};

class CT : public Player
{
public:
    CT();
    //~CT();
    void AssignWeapon(string weapon) override;
    void Mission() override;

};

/*-----------------------������Ա����---------------------------
    ��Ԫ���������������ṩһ�����ڴ洢��Ԫ�������Ԫ�أ�����Ҫ����ʱ�����ȴ���Ԫ���л�ȡ����������ڣ��򴴽�һ���µ���Ԫ���󣬽��䱣������Ԫ���в����أ�
*/
class PlayerFactory                                     //��Ԫ��
{
public:
    static Player* GetPlayer(string type);              //һ����ԣ���Ԫ��������������ϵͳ��ֻ��һ�������Ҳ����ʹ�õ���ģʽ��

private:
    static map<string, Player*> m_map;                  //����Ϊ��̬����(ֻ����һ�οռ�)������Ҫ�������ʼ��
};


/*
    override�ؼ������ã�
    ������������麯������ʱʹ����override����������ô�ú�����������������е�ͬ�������������б�ɲ���ͬ����������뽫�޷�ͨ�����롣
*/