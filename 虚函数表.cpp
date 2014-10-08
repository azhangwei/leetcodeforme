#include <iostream>

using namespace std;

//class A {
//public:
//	A():a(1),b(0),c(1){}
//	~A(){}
//	virtual void print(){cout<<a<<endl;}
//private: 
//	int a;
//	char b;
//	double c;
//};
//
//class B:public A
//{
//public:
//	B():ab(0){};
//	~B(){};
//	//void print(){cout<<ab<<endl;}
//private:
//	int ab;
//	char bb;
//	double cb;
//};
//
//void kaipi(char *&p)
//{
//	p=new char[100];
//}

int main()
{
	/*A a;
	B b;
	a.print();
	b.print();
	A *aa=&b;
	aa->print();
	return 0;*/
	//char *a;
	//kaipi(a);
	//for(int i=0;i<10;i++)
	//	a[i]='a';

	const int a=1;
	int *b=(int*)&a;
	*b=2;
	cout<<a<<endl;
	cout<<*b<<endl;
	return 0;
}