//#include <iostream>
//
//using namespace std;
//
//int trap(int A[], int n);
//
//int main()
//{
//	int A[]={4,2,3};
//	int re=trap(A,3);
//	return 0;
//}
//
//int trap(int A[], int n) 
//{
//	int sum=0;
//	int i,j;
//    for( i=0;i<n;)
//	{
//		if(A[i]==0)
//		{
//			i++;
//			continue;
//		}
//		for(j=i+1;j<n;j++)
//		{
//			if(A[j]<A[i])
//				continue;
//			for(int k=i;k<j;k++)
//				sum+=A[i]-A[k];
//			i=j;
//			break;
//		}
//		if(j==n)
//		{
//			A[i]--;
//		}
//	}
//	return sum;
//}