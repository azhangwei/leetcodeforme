//#include <iostream>
//#include <queue>
//using namespace std;
//
//int jump(int A[], int n);
//
//int main()
//{
//	int A[]={1,2,3};
//	int jum=jump(A,3);
//	return 0;
//}
//
//int jump(int A[], int n)
//{
//	////////////////////////////�ڴ泬   Memory Limit Exceeded
//	/*queue<int> location;
//	queue<int> times;
//	if(n==0)
//		return 0;
//	if(A[0]>=n-1)
//		return 1;
//    location.push(0);
//	times.push(0);
//	int lo,ti;
//	int len=0;
//	while(location.size())
//	{
//		lo=location.front();
//		location.pop();
//		ti=times.front();
//		times.pop();
//
//		len=A[lo];
//		for(int i=lo+1;i<=len+lo;i++)
//		{
//			if((A[i]+i)>=n-1)
//				return ti+2;
//			else
//			{
//				location.push(i);
//				times.push(ti+1);
//
//			}
//		}
//	}
//	return 0;*/
//	if(n==1)
//		return 0;
//	int left=0;
//	int right=0;
//	int step=0;
//	int new_right=0;
//	int old_right;
//	if(A[left]>=n-1)
//		return 1;
//	while(left<=right)
//	{
//		step++;
//		old_right=right;
//		for(int i=left;i<=right;i++)
//		{
//			if(A[i]+i>=n-1)
//				return step;
//			if(new_right<A[i]+i)
//				new_right=A[i]+i;
//		}
//		right=new_right;
//		left=old_right+1;
//	}
//	return 0;
//}