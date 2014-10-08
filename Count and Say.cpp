//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string countAndSay(int n);
//
//int main()
//{
//	
//	for(int i=2;i<6;i++)
//		cout<<countAndSay(i)<<endl;
//	return 0;
//}
//
//string countAndSay(int n)
//{
//	string result_one;
//	string result_two;
//	if(n==0)
//		return NULL;
//	result_one="1";
//	if(n==1)
//		return result_one;
//	int len;
//	char qian;
//	int num;
//	for(int i=1;i<n;i++)
//	{
//		len=result_one.size();
//		qian=result_one[0];
//		num=1;
//		for(int j=1;j<len;j++)
//		{
//			if(result_one[j]==qian)
//			{
//				num++;
//			}
//			else
//			{
//				result_two+=num+'0';
//				result_two+=qian;
//				num=1;
//				qian=result_one[j];
//			}
//		}
//		result_two+=num+'0';
//		result_two+=qian;
//
//		result_one=result_two;
//		result_two="";
//	}
//	return result_one;
//}