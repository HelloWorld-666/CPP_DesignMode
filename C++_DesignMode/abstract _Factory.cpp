//#include "abstract _Factory.h"
//
//void ProductA::MakeProduct()
//{
//    cout << "ProductA..." << endl;
//}
//
//void ProductB::MakeProduct()
//{
//    cout << "ProductB..." << endl;
//}
//
//void NewProductA::MakeNewProduct()
//{
//    cout << "NewProductA..." << endl;
//}
//
//void NewProductB::MakeNewProduct()
//{
//    cout << "NewProductB..." << endl;
//}
//
//Product* FactoryA::CreateProduct()
//{
//    return new ProductA();
//}
//
//NewProduct* FactoryA::CreateNewProduct()
//{
//    return new NewProductA();
//}
//
//Product* FactoryB::CreateProduct()
//{
//    return new ProductB();
//}
//
//NewProduct* FactoryB::CreateNewProduct()                //����B��������ƷNewProduct
//{
//    return new NewProductB();
//}
//
//int main()
//{
//    //A��Ʒ
//    FactoryA* fa = new FactoryA();
//    Product* p = fa->CreateProduct();            
//    p->MakeProduct();                                   //�����ProductA...
//
//    //ProductA* pa = FactoryA::CreateProduct();         //���󣺷Ǿ�̬��Ա��������ֱ�����������ã�ֻ������Ķ���ȥ����
//
//    //�µ�B��Ʒ
//    FactoryB* fb = new FactoryB();
//    NewProduct* new_p = fb->CreateNewProduct();         //�����NewProductB...         //�������ָ�룬����������ķ���
//    new_p->MakeNewProduct();
//
//    getchar();
//    return 0;
//}
//
//
///*
//    https://blog.csdn.net/wuzhekai1985/article/details/6660462
//
//*/
