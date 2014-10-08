////#include<iostream>
////
////using namespace std;
////
////char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };  
////char **cp[] = { c+3, c+2, c+1, c };  
////char ***cpp = cp;  
////
////struct S 
////{ 
////	void func1(S &); 
////	void func2(const S&); 
////	void func3(S&) const; 
////	void func4(const S&) const; 
////}; 
////
////int main(void) 
////{  
////	cout<<**++cpp<<endl;  
////	cout<<*--*++cpp+3<<endl;  
////	cout<<*cpp[-2]+3<<endl;;  
////	cout<<cpp[-1][-1]+1;
////
////	enum {a, b=5, c, d=4, e}; 
////
////	cout<<a<<endl;
////	cout<<e<<endl;
////
////
////	//enum body  
////	//{ a,b,c,d } month[31],j;  
////	//int i;  
////	//j=a;  
////	//for(i=1;i<=30;i++)  
////	//{  
////	//	month[i]=j;  
////	//	j = (enum body)(j + 1); //这样改下即可，强制转换下  
////	//	if (j>d) j=a;  
////	//}  
////	//for(i=1;i<=30;i++)  
////	//{  
////	//	switch(month[i])  
////	//	{  
////	//	case a:printf(" %2d  %c/t",i,'a'); break;  
////	//	case b:printf(" %2d  %c/t",i,'b'); break;  
////	//	case c:printf(" %2d  %c/t",i,'c'); break;  
////	//	case d:printf(" %2d  %c/t",i,'d'); break;  
////	//	default:break;  
////	//	}  
////	//}  
////	//printf("/n");  
////
////	return 0; 
////}
//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <map>
//#include <unordered_map>
//using namespace std;
//
////typedef struct object object;
////struct object
////{
////	char data[3];
////};
////
////object obj_array[3] = {{'a', 'b', 'c'},
////{'d', 'e', 'f'},
////{'g', 'h', 'i'},
////};
////
////int main()
////{
////	object *cur = obj_array;
////	cout<<*(char*)(cur+2)<<endl;
////	cout<<*(char*)(cur+2);
////	return 0;
////}
//
//class A  
//{  
//public:  
//	A()
//	{
//		cout<<" construct a"<<endl;
//	}
//	virtual ~A();  
//};  
//A::~A()  
//{  
//	printf("delete A ");  
//}  
//
//class B : public A  
//{  
//public:  
//	B()
//	{
//		cout<<"construct b"<<endl;
//	}
//	~B();  
//};  
//B::~B()  
//{  
//	printf("delete B ");  
//}
//
//int main()
//{
//	//A *a=new B();
//	//delete a;
//
// //   char a[8]="abcdefg";
//	//char *p;
//	//p=a;
//	//p[3]='a';
//	//*(p+3)='a';
//
//	/*map<int,int> a;
//	a[4]=1;
//	a[5]=2;
//	a[6]=3;
//	map<int,int>::iterator i=a.begin();
//	a[0]=16;
//	cout<<i->second<<endl;*/
//
//	//int n=20;
//	//int m=5;
//	//for(int i=0;i<n;i++)
//	//{
//	//	if((rand()%(n-i))<m)
//	//	{
//	//		cout<<i<<endl;
//	//		m--;
//	//	}
//	//}
//
//	//int a=6;
//	//int b=(a<<8)-a;
//	//int c=a<<8-a;
//	//cout<<b<<"   "<<c<<endl;
//
//	int  a[5];
//	/*cout<<a[3]<<endl;*/
//	int *b=new int[5];
//	cout<<b[4]<<endl;
//	cout<<b[2]<<endl;
//
//
//	return 0;
//}