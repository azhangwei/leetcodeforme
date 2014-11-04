#include <iostream>
#include <string>
using namespace std;

class Singleton
{
private:
	static Singleton *singleton;
	int num;
	Singleton(){num=10;}
public:
	static Singleton * getinstance()
	{
		if(singleton==NULL)
		{
			//lock()  C++没有直接的Lock操作，请使用其它库的Lock，比如Boost，此处仅为了说明
			if(singleton==NULL)
				singleton=new Singleton();

		}
		return singleton;
	}
	static void DestroySingleton()
	{
		if(singleton!=NULL)
		{
			delete singleton;
		    singleton=NULL;
		}
	}
	int getresult()
	{
		return num;
	}

};

int main()
{

	return 0;
}