//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void rotate(vector<vector<int> > &matrix);
//
//int main()
//{
//
//	return 0;
//}
//
//void rotate(vector<vector<int> > &matrix)
//{
//	int len=matrix[0].size();
//	int swp;
//	for(int i=0;i<len-1;i++)
//		for(int j=0;j<len-i-1;j++)
//		{
//			swp=matrix[i][j];
//			matrix[i][j]=matrix[len-j-1][len-i-1];
//			matrix[len-j-1][len-i-1]=swp;
//		}
//   for(int i=0;i<len/2-1;i++)
//	   for(int j=0;j<len;j++)
//	   {
//		   swp=matrix[i][j];
//		   matrix[i][j]=matrix[len-i-1][j];
//		   matrix[len-i-1][j]=swp;
//	   }
//}