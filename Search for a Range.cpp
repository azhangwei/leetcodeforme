//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<int> searchRange(int A[], int n, int target);
//int searchInsert(int A[], int n, int target);
//
//int main()
//{
//	int A[]={1,3};
//	//vector<int>en=searchRange(A,2,2);
//	int re=searchInsert(A,2,5);
//	return 0;
//}
//
//vector<int> searchRange(int A[], int n, int target)
//{
//	int start=0;
//	int end=n-1;
//	
//	vector<int> result;
//	if(0==n)
//		return result;
//	int mid=(start+(end-start)/2);
//
//	while(start<end-1)
//	{
//		if(A[mid]<target)
//			start=mid;
//		else
//			end=mid;
//		mid=(start+(end-start)/2);
//	}
//
//	if(A[start]!=target&&A[end]!=target)
//	{
//		result.push_back(-1);
//		result.push_back(-1);
//		return result;
//	}
//	if(A[start]==target)
//	{
//		result.push_back(start);
//	}
//	else
//		result.push_back(end);
//
//	start=result[0];
//    end=n-1;
//	while(start<end-1)
//	{
//		if(A[mid]>target)
//			end=mid;
//		else
//			start=mid;
//		mid=(start+(end-start)/2);
//	}
//
//	if(A[end]==target)
//	{
//		result.push_back(end);
//	}
//	else
//		result.push_back(start);
//	return result;
//}
//
//int searchInsert(int A[], int n, int target)
//{
//	int start=0;
//	int end=n-1;
//	int mid=(start+(end-start)/2);
//	if(target<=A[0])
//		return 0;
//	if(target>A[n-1])
//		return n;
//	while(start<end-1)
//	{
//		if(A[mid]<target)
//			start=mid;
//		else
//			end=mid;
//		mid=(start+(end-start)/2);
//	}
//
//	return start+1;
//}