//#include <iostream>
//#include <set>
//#include <vector>
//using namespace std;
//
//int firstMissingPositive(vector<int> &A, int n);
//void bucket_sort(vector<int> &A, int n);
//
//int main()
//{
//	int A[]={3,4,-1,1,2,6,6,9,8};
//	vector<int> AA;
//	for(int i=0;i<9;i++)
//		AA.push_back(A[i]);
//	int re=firstMissingPositive(AA,9);
//	return 0;
//}
//
//int firstMissingPositive(vector<int> &A, int n)
//{
//	bucket_sort(A, n);
//	for(int i=0;i<n;i++)
//		cout<<A[i]<<"   ";
//	for (int i = 0; i < n; ++i)
//		if (A[i] != (i + 1))
//			return i + 1;
//	return n + 1;
//}
//
//void bucket_sort(vector<int>&A, int n) 
//{
//	for (int i = 0; i < n; i++)
//	{
//		while (A[i] != i + 1) 
//		{
//			if (A[i] <= 0 || A[i] > n || A[i] == A[A[i] - 1])
//				break;
//			swap(A[i], A[A[i] - 1]);
//		}
//	}
//}