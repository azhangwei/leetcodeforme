#include <iostream>
#include <string>
using namespace std;

class operation
{
public:
	double numberA;
	double numberB;
public:
	virtual double getResult(){
		return 0;
	}
};
class operationAdd:public operation{
	double getResult(){
		return numberA+numberB;
	}
};
class operationSub:public operation{
	double getResult(){
		return numberA-numberB;
	}
};

typedef enum operationTpye{
	Add,
	Sub
}Type;

class operationFactory{
public:
	static operation *createOperation(Type operate){
		operation *oper=NULL;
	    switch(operate){
		case Add:
			oper=new operationAdd();
			break;
		case Sub:
			oper=new operationSub();
			break;
		}

		return oper;
	}
};
int main()
{
	operation *oper;
	//operationFactory newfactory;
	//oper=newfactory.createOperation("+");
	oper=operationFactory::createOperation(Sub);
	oper->numberA=19;
	oper->numberB=10;
	double re=oper->getResult();

	return 0;
}