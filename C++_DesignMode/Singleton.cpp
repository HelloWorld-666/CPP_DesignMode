//#include "Singleton.h"
//
////Singleton* Singleton::_instance = 0;                                        //ȫ�ֱ�����ʼ����̬bian
//Singleton* Singleton::_instance = new Singleton();                            //������ģʽ����������Ҳ���ü��ˣ���Ϊ���ǵ��� CSingleton::GetInstance() ֮ǰ�����ľ�̬��Ա������Ѿ���ʵ������
//
//Singleton::Singleton()
//{
//    cout << "Singleton..." << endl;
//}
//
//Singleton::~Singleton()
//{
//}
//
//Singleton* Singleton::GetInstance()
//{
//    if (_instance == 0)                                                     //��һ�ε��û�ȡʵ���ĺ���ʱ����̬��ı���ָ��գ����Իᴴ��һ������������ڶ��ε��þͲ��ǿ��ˣ�ֱ�ӷ��ص�һ�εĶ���ָ�루��ַ��
//    {
//        _instance = new Singleton();
//    }
//
//    return _instance;
//}
//
//int main()
//{
//    //Singleton sgn;                                                        //����
//    //Singleton* sgn = new Singleton();                                     //����
//    Singleton* sgn  = Singleton::GetInstance();
//    Singleton* sgn1 = Singleton::GetInstance();
//    cout << "&sgn = " << sgn << '\t' << "&sgn1 = " << sgn1 << endl;         //������ַһ������̬���ݳ�Աֻ�ܱ���ʼ��һ��
//
//    getchar();
//    return 0;
//}
//
///*
//    https://www.cnblogs.com/dupengcheng/p/7205527.html
//    1.Ϊ��ֹ����������µ�ʵ����������Ϊ��SIngleton a; Singleton a = new Singleton()�������캯����Ϊ private �� proctected ����
//    ���򣺱������ᱨ����Ϊ˽�л��Ĺ��캯���޷����ⲿ����
//
//    2._instance����Ϊstatic��Ϊ�˱�֤��ε�������������ص���һ��������Ϊ��̬���ݳ�Աֻ�ܱ���ʼ��һ��
//*/