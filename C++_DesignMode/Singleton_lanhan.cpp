//#include "Singleton_lanhan.h"
//
////������ģʽ������Ϊ�����ķ�ʽֻ�����ҵ��� CSingleton::GetInstance() ��ʱ��Ż᷵��һ��ʵ�����Ķ��������ˣ��Ҳ�Ҫ����Ͳ����ң��ǲ��ǣ�
//SingletonLH::SingletonLH()
//{
//    cout << "SingletonLH..." << endl;
//}
//
//SingletonLH::~SingletonLH()
//{
//}
//
//SingletonLH* SingletonLH::GetInstanceLH()
//{
//    static SingletonLH* _instancelh = new SingletonLH();    //��������ľ�̬�����ж��壬�������ⲿ����
//
//    return _instancelh;
//}
//
//int main()
//{
//    SingletonLH* sgnlh = SingletonLH::GetInstanceLH();
//    SingletonLH* sgnlh1 = SingletonLH::GetInstanceLH();
//    cout << "&sgnlh = " << sgnlh << '\t' << "&sgnlh1 = " << sgnlh1 << endl;         //������ַһ������̬���ݳ�Աֻ�ܱ���ʼ��һ��
//
//    getchar();
//    return 0;
//}