//#include "Singleton.h"
//
////Singleton* Singleton::_instance = 0;                                        //全局变量初始化静态bian
//Singleton* Singleton::_instance = new Singleton();                            //《饿汉模式》：这样锁也不用加了，因为我们调用 CSingleton::GetInstance() 之前这个类的静态成员对象就已经被实例化了
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
//    if (_instance == 0)                                                     //第一次调用获取实例的函数时，静态类的变量指针空，所以会创建一个对象出来，第二次调用就不是空了，直接返回第一次的对象指针（地址）
//    {
//        _instance = new Singleton();
//    }
//
//    return _instance;
//}
//
//int main()
//{
//    //Singleton sgn;                                                        //错误
//    //Singleton* sgn = new Singleton();                                     //错误
//    Singleton* sgn  = Singleton::GetInstance();
//    Singleton* sgn1 = Singleton::GetInstance();
//    cout << "&sgn = " << sgn << '\t' << "&sgn1 = " << sgn1 << endl;         //两个地址一样，静态数据成员只能被初始化一次
//
//    getchar();
//    return 0;
//}
//
///*
//    https://www.cnblogs.com/dupengcheng/p/7205527.html
//    1.为防止类外进行如下的实例化对象行为：SIngleton a; Singleton a = new Singleton()，将构造函数设为 private 或 proctected 属性
//    否则：编译器会报错，因为私有化的构造函数无法被外部调用
//
//    2._instance定义为static：为了保证多次调用这个函数返回的是一个对象，因为静态数据成员只能被初始化一次
//*/