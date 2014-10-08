//#include <iostream>
//
//using namespace std;
//
//double pow(double x, int n);
//int *cal(int *input,int n);
//int maxSubArray(int A[], int n);
//int main()
//{
//	//int a[]={2,3,4,5};
//	//int *B=cal(a,4);
//	//for(int i=0;i<4;i++)
//	//	cout<<B[i]<<endl;
//	return 0;
//}
//
////double pow(double x, int n)
////{
////	double result;
////	if(n==0)
////		return 1;
////	if(n==1)
////		return x;
////	if(n==2)
////		return x*x;
////	bool mark=false;
////	if(n<0)
////	{
////		mark=true;
////		n*=-1;
////	}
////	result=pow(x,n/2);
////	result*=result;
////	if(n%2!=0)
////		result*=x;
////	if(mark)
////		result=1.0/result;
////	return result;
////}
//
//int *cal(int *input,int n)
//{
//	if(n==0)
//		return NULL;
//	int *cal=new int[n];
//	cal[0]=1;
//	for(int i=1;i<n;i++)
//	{
//		cal[i]=cal[i-1]*input[i-1];
//	}
//	int tmp=1;
//	for(int i=n-2;i>=0;i--)
//	{
//		tmp*=input[i+1];
//		cal[i]*=tmp;
//	}
//	return cal;
//}
//
//int maxSubArray(int A[], int n)
//{
//	if(n==0)
//		return 0;
//	int max=A[0];
//	int tmp_max=A[0];
//	for(int i=1;i<n;i++)
//	{
//		if(tmp_max<0)
//			tmp_max=0;
//		tmp_max+=A[i];
//		if(tmp_max>max)
//			max=tmp_max;
//	}
//	return max;
//}
//


