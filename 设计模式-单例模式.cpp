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
			//lock()  C++û��ֱ�ӵ�Lock��������ʹ���������Lock������Boost���˴���Ϊ��˵��
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