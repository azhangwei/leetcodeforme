//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int singleNumber(int A[], int n);
//int singleNumber_three(int A[], int n);
//int main()
//{
//	int a=3,b=4,c=5,d=4,e=5;
//	int s=a^b^c^d^e;
//	int A[]={-19,-46,-19,-46,-9,-9,-19,17,17,17,-13,-13,-9,-13,-46,-28};
//	int op=singleNumber_three(A,16);
//	return 0;
//}
//
//int singleNumber(int A[], int n)	
//{
//	int result=0;
//	for(int i=0;i<n;i++)
//	{
//		result^=A[i];
//	}
//	return result;
//}
//
//int singleNumber_three(int A[], int n)
//{
//	int len=sizeof(int)*8;
//	vector<int>count(len);
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<len;j++)
//		{
//			if(A[i]&(1<<j))
//			count[j]+=1;
//		}
//	
//	}
//	int insult=0;
//	int k=1;
//	for(int i=0;i<len;i++)
//	{
//		if(count[i]%3==0)
//			continue;
//		insult+=(k<<i);
//	}
//	return insult;
//}
