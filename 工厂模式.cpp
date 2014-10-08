////#include<iostream>
////using namespace std;
////
////class Product
////{
////public:
////	virtual void operation()
////	{
////
////	}
////};
////class ProductA:public Product
////{
////public:
////	void operation()
////	{
////		cout<<"a"<<endl;
////	}
////};
////class ProductB:public Product
////{
////public:
////	void operation()
////	{
////		cout<<"b"<<endl;
////	}
////};
////class Factory
////{
////public:
////	Product *Create(char type)
////	{
////		if(type=='a')
////		{
////			return new ProductA;
////		}
////		else if(type=='b')
////		{
////			return new ProductB;
////		}
////	}
////};
////
////int main()
////{
////	Factory f;
////	Product *p=f.Create('a');
////	p->operation();
////	delete p;
////	return 0;
////}
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a[5]={1,2,3,4,5};
//	int *p,*k;
//	p=a;
//	k=p;
//	//cout<<**k<<endl;
//	//cout<<p<<endl;
//	//cout<<a<<endl;
//	//cout<<*k<<endl;
//	//cout<<k<<endl;
//	cout<<*(p++)<<endl;
//	cout<<*k<<endl;
//	/*cout<<p<<endl;
//	cout<<a<<endl;
//	cout<<*k<<endl;
//	cout<<k<<endl;*/
//	return 0;
//}