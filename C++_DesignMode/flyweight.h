#include <stdio.h>
#include <iostream>
#include <string>               //cout 输出string类型变量时需要
#include <map>
#include <time.h>
#include <windows.h>            //sleep()

using namespace std;
/*--------------------------创建抽象享元类---------------------------------------*/
class Player
{
public:
    //Player();
    //~Player();
    virtual void AssignWeapon(string m_weapon) = 0;
    virtual void Mission() = 0;

protected:                      //保护属性，否则派生类不能访问
    string m_weapon;
    string m_mission;
};

/*--------------------------创建具体享元类---------------------------------------*/
class T : public Player
{
public:
    T();
    //~T();
    void AssignWeapon(string weapon) override ;     //外部状态：每个T可以使用不同的 weapon
    void Mission() override;                        //内部状态：每个T的Mission都是 plant a bomb

};

class CT : public Player
{
public:
    CT();
    //~CT();
    void AssignWeapon(string weapon) override;
    void Mission() override;

};

/*-----------------------创建享员工厂---------------------------
    享元工厂的作用在于提供一个用于存储享元对象的享元池，当需要对象时，首先从享元池中获取，如果不存在，则创建一个新的享元对象，将其保存至享元池中并返回：
*/
class PlayerFactory                                     //享元池
{
public:
    static Player* GetPlayer(string type);              //一般而言，享元工厂对象在整个系统中只有一个，因此也可以使用单例模式。

private:
    static map<string, Player*> m_map;                  //定义为静态类型(只分配一次空间)，并需要在类外初始化
};


/*
    override关键字作用：
    如果派生类在虚函数声明时使用了override描述符，那么该函数必须重载其基类中的同名函数（参数列表可不相同），否则代码将无法通过编译。
*/