//#include <stdlib.h>
//#include <iostream>
//
//using namespace std;
//
////旧产品
//class Product
//{
//public:
//    virtual void MakeProduct() = 0;             //在基类中不能对虚函数给出有意义的实现，而把它声明为纯虚函数，它的实现留给该基类的派生类去做
//};
//
//class ProductA : public Product
//{
//public:
//    void MakeProduct();
//};
//
//class ProductB : public Product
//{
//    void MakeProduct();
//};
//
////新产品
//class NewProduct
//{
//public:
//    virtual void MakeNewProduct() = 0;
//};
//
//class NewProductA : public NewProduct 
//{
//public:
//    void MakeNewProduct();
//};
//
//class NewProductB : public NewProduct
//{
//    void MakeNewProduct();
//};
///*------------------------------------------------------------*/
////工厂：
//class Factory
//{
//public:
//    virtual Product*    CreateProduct() = 0;        //错误：返回值不能为ProductA，这里是通过基类的指针指向派生类的方法，从而调用派生类的方法(多态)
//    virtual NewProduct* CreateNewProduct() = 0;     //错误：返回值不能为NewProductA
//};
//
//class FactoryA : public Factory
//{
//public:
//    Product*    CreateProduct();
//    NewProduct* CreateNewProduct();
//};
//
//class FactoryB : public Factory
//{
//public:
//    Product*    CreateProduct();
//    NewProduct* CreateNewProduct();
//};
//
//
////继承基类的虚函数是因为要实现多态
///*
//    1.基类函数定义为虚函数：(等式右侧的对象为主)
//    如果对象是基类的对象，调用的就是基类的函数，如果对象是派生类的，就调用派生类的同名函数
//    2.基类函数未定义为虚函数：(等式左侧的指针为主)
//    如果是基类的指针指向派生类的对象，调用的就是基类的方法；
//    如果是派生类的指针指向基类的对象，调用的就是派生类的方法；
//    指向谁的指针就调用谁的方法
//*/