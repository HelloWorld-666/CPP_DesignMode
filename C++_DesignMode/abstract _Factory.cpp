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
//NewProduct* FactoryB::CreateNewProduct()                //工厂B返回新商品NewProduct
//{
//    return new NewProductB();
//}
//
//int main()
//{
//    //A商品
//    FactoryA* fa = new FactoryA();
//    Product* p = fa->CreateProduct();            
//    p->MakeProduct();                                   //输出：ProductA...
//
//    //ProductA* pa = FactoryA::CreateProduct();         //错误：非静态成员函数不能直接用类名引用，只能用类的对象去引用
//
//    //新的B商品
//    FactoryB* fb = new FactoryB();
//    NewProduct* new_p = fb->CreateNewProduct();         //输出：NewProductB...         //派生类的指针，调用派生类的方法
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
