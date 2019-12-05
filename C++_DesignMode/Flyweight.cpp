#include "Flyweight.h"

using namespace std;

T::T()
{
    m_mission = " plant a bomb.";
}


void T::AssignWeapon(string weapon) 
{
    m_weapon = weapon;
}

void T::Mission() 
{
    //cout << " T's weapon is " + m_weapon << "," << "T's mission is " + m_mission << endl;
    cout << " T's weapon is " + m_weapon << "," << "T's mission is" + m_mission << endl;
}

/*----------------------------------------------------------------------------*/
CT::CT()
{
    m_mission = " Diffuse bomb.";
}

void CT::AssignWeapon(string weapon)
{
    m_weapon = weapon;
}

void CT::Mission()
{
    cout << " CT's weapon is " + m_weapon << "," << "CT's mission is" + m_mission << endl;
}

/*----------------------------------------------------------------------------*/
Player* PlayerFactory::GetPlayer(string type)       //构建Player享元池
{
    Player* p = NULL;
    
    if (m_map.find(type) != m_map.end())            //存在
    {
        p = m_map[type];
    }
    else                                            //不存在
    {
        if (type == "T")
        {
            p = new T();
            cout << " T Created " << endl;
        }
        else if (type == "CT")
        {
            p = new CT();
            cout << " CT Created " << endl;
        }
        else
        {
            cout << "error!" << endl;
        }
        m_map.insert(make_pair(type, p));           //将新创建的对象加入享元池
        //m_map.insert(map<string, Player*>::value_type(type, p));
        //m_map.insert(pair<string, Player*>(type, p))
    }

    return p;                                                                       //返回创建的共享对象
}



map<std::string, Player*> PlayerFactory::m_map = map<std::string, Player*>();       //staric修饰，类外初始化
// 玩家类型和武器
static std::string s_playerType[2] = { "T", "CT" };
static std::string s_weapons[4] = { "AK-47", "Maverick", "Gut Knife", "Desert Eagle" };

#define GET_ARRAY_LEN(array, len) {len = (sizeof(array) / sizeof(array[0]));}

int main()
{
    int playerLen; 
    int weaponsLen;   
    GET_ARRAY_LEN(s_playerType, playerLen);
    GET_ARRAY_LEN(s_weapons, weaponsLen);

    srand((unsigned)time(NULL));                                                    //随机数种子放在循环外

    for (int i = 0; i < 10; i++)
    {
        int typeIndex   = rand() % playerLen;
        int weaponIndex = rand() % weaponsLen;
        string type = s_playerType[typeIndex];
        string weapon = s_weapons[weaponIndex];

        Player* p = PlayerFactory::GetPlayer(type);

        //分配武器
        p->AssignWeapon(weapon);

        //执行任务
        p->Mission();   
    }


    getchar();
    return 0;
}


/*
    https://blog.csdn.net/liang19890820/article/details/79629690
    https://blog.csdn.net/justloveyou_/article/details/55045638
*/
