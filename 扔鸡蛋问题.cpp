//#include<iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	///////////////////////»”º¶µ∞Œ Ã‚
//	int n=100;
//	int m=5;
//	vector<vector<int> >f(n+1,vector<int>(m+1));
//	for(int i=0;i<=m;i++)
//		f[0][i]=0;
//	for(int i=0;i<=n;i++)
//		f[i][1]=i;
//	int max=0;
//	int min=100;
//	for(int i=2;i<=m;i++)
//		for(int j=1;j<=n;j++)
//		{
//			for(int k=1;k<=j;k++)
//			{
//				max=f[k-1][i-1]>f[j-k][i]?f[k-1][i-1]:f[j-k][i];
//				if(max<min)
//					min=max;
//			}
//			f[j][i]=min+1;
//			min=100;
//		}
//	cout<<f[n][m]<<endl;
//	return 0;
//}