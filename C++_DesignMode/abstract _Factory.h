//#include <stdlib.h>
//#include <iostream>
//
//using namespace std;
//
////�ɲ�Ʒ
//class Product
//{
//public:
//    virtual void MakeProduct() = 0;             //�ڻ����в��ܶ��麯�������������ʵ�֣�����������Ϊ���麯��������ʵ�������û����������ȥ��
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
////�²�Ʒ
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
////������
//class Factory
//{
//public:
//    virtual Product*    CreateProduct() = 0;        //���󣺷���ֵ����ΪProductA��������ͨ�������ָ��ָ��������ķ������Ӷ�����������ķ���(��̬)
//    virtual NewProduct* CreateNewProduct() = 0;     //���󣺷���ֵ����ΪNewProductA
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
////�̳л�����麯������ΪҪʵ�ֶ�̬
///*
//    1.���ຯ������Ϊ�麯����(��ʽ�Ҳ�Ķ���Ϊ��)
//    ��������ǻ���Ķ��󣬵��õľ��ǻ���ĺ��������������������ģ��͵����������ͬ������
//    2.���ຯ��δ����Ϊ�麯����(��ʽ����ָ��Ϊ��)
//    ����ǻ����ָ��ָ��������Ķ��󣬵��õľ��ǻ���ķ�����
//    ������������ָ��ָ�����Ķ��󣬵��õľ���������ķ�����
//    ָ��˭��ָ��͵���˭�ķ���
//*/