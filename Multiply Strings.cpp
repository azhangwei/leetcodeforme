//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string multiply(string num1, string num2);
//
//int main()
//{
//	string aa="123";
//	string bb="2";
//	string re=multiply(aa,bb);
//	return 0;
//}
//
//string multiply(string num1, string num2)
//{
//	//////////////·­×ª
//	for(int i=0;i<num1.size()/2;i++)
//	{
//		char tmp=num1[i];
//		num1[i]=num1[num1.size()-1-i];
//		num1[num1.size()-1-i]=tmp;
//	}
//	for(int i=0;i<num2.size()/2;i++)
//	{
//		char tmp=num2[i];
//		num2[i]=num1[num2.size()-1-i];
//		num1[num2.size()-1-i]=tmp;
//	}
//	string result;
//	for(int i=0;i<num1.size();i++)
//	{
//		string tmp;
//		for(int j=0;j<i;j++)
//			tmp+='0';
//		int chen=num1[i]-'0';
//		int jin=0;
//		int to;
//		for(int j=0;j<num2.size();j++)
//		{
//			to=chen*int(num2[j]-'0')+jin;
//			jin=to/10;
//			to%=10;
//			tmp=tmp+char(to+'0');
//		}
//		if(jin>0)
//		tmp=tmp+char(jin+'0');
//		jin=0;
//		for(int j=0;j<tmp.size();j++)
//		{
//			if(j<result.size())
//			{
//				int add_two=int(result[j]-'0')+int(tmp[j]-'0')+jin;
//				jin=add_two/10;
//				add_two%=10;
//				result[j]=char(add_two+'0');
//			}
//			else
//			{
//				int add_two=int(tmp[j]-'0')+jin;
//				jin=add_two/10;
//				add_two%=10;
//				result+=char(add_two+'0');
//			}
//		}
//		if(jin>0)
//			result+=char(jin+'0');
//	}
//	return result;
//}