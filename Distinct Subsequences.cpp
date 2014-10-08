//#include <iostream>
//#include <string>
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//int numDistinct(string S, string T);
//void isA(string S,string T,int start_s,int start_t,int &num);
//
//int main()
//{
//	string S="rabbbit";
//	string T="rabbit";
//	printf("%f",5.0);
//	//cout<<endl;
//	printf("%d",5);
//	//int en=numDistinct(S,T);
//	return 0;
//}
//
//int numDistinct(string S, string T)
//{
//	//////////////////////////////////我的算法，深度遍历，时间超。
//	//int re=0;
//	//isA(S,T,0,0,re);
//	//return re;
//   ///////////////////////////////////////这个居然能用动态规划，不能理解。
//	vector<int> f(T.size() + 1);
//	f[0] = 1;
//	for (int i = 0; i < S.size(); ++i) {
//		for (int j = T.size() - 1; j >= 0; --j) {
//			f[j + 1] += S[i] == T[j] ? f[j] : 0;
//		}
//	}
//	return f[T.size()];
//
//}
//
//void isA(string S,string T,int start_s,int start_t,int &num)
//{
//    if(start_s==S.size()&&start_t<T.size())
//		return;
//	if(start_t==T.size())
//	{
//		num++;
//		return;
//	}
//	for(int i=start_s;i<S.size();i++)
//	{
//		if(S[i]==T[start_t])
//		{
//			isA(S,T,i+1,start_t+1,num);
//		}
//	}
//
//}