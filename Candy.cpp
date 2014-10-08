//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int candy(vector<int> &ratings);
//void candy_three(vector<int> &ratings,int beg,int ed,vector<int>& every);
//
//int main()
//{
//	vector<int>rate;
//	rate.push_back(1);
//	rate.push_back(2);
//	rate.push_back(4);
//	rate.push_back(4);
//	rate.push_back(3);
//	int total=candy(rate);
//	return 0;
//}
//
//int candy(vector<int> &ratings)
//{
//	/////////////////////////////////////////////自己的方法，错误！！！！！！
//	//vector<int> every(ratings.size(),1);
//	//candy_three(ratings,0,ratings.size()-1,every);
//	//int result=0;
//	//for(int i=0;i<ratings.size();i++)
//	//	result+=every[i];
//	//return result;
//	/////////////////////////////////////////////////////
//	vector<int> single(ratings.size());
//	int bas=1;
//	for(int i=1;i<ratings.size();i++)
//	{
//		if(ratings[i]>ratings[i-1])
//		{
//			single[i]=bas;
//			bas++;
//		}
//		else
//		{
//			bas=1;
//		}
//	}
//	bas=1;
//	for(int i=ratings.size()-2;i>=0;i--)
//	{
//		if(ratings[i]>ratings[i+1])
//		{
//			single[i]=bas;
//			bas++;
//		}
//		else
//		{
//			bas=1;
//		}
//	}
//	int result=0;
//	for(int i=0;i<ratings.size();i++)
//		result+=single[i];
//	result+=ratings.size();
//	return result;
//}
//
//void candy_three(vector<int> &ratings,int beg,int ed,vector<int>&every)
//{
//	if(ed-beg==1)
//	{
//		if(ratings[ed]>ratings[beg])
//			if(every[ed]<every[beg]+1)
//				every[ed]=every[beg]+1;
//		if(ratings[ed]<ratings[beg])
//			if(every[ed]+1>every[beg])
//				every[beg]=every[ed]+1;
//		return;
//	}
//	if(ed-beg<=0)
//		return;
//	int mid=beg+(ed-beg)/2;
//	candy_three(ratings,beg,mid-1,every);
//	candy_three(ratings,mid+1,ed,every);
//	if(ratings[mid]>ratings[mid-1])
//		if(every[mid]<every[mid-1]+1)
//			every[mid]=every[mid-1]+1;
//	if(ratings[mid]>ratings[mid+1])
//		if(every[mid]<every[mid+1]+1)
//			every[mid]=every[mid+1]+1;
//	/////////////////////////////////////////////////错误原因，不应该都加1；
//	if(ratings[mid]<ratings[mid-1])
//	{
//		if(every[mid]>=every[mid-1])
//		{
//			for(int i=beg;i<=mid-1;i++)
//				every[i]+=(every[mid]-every[mid-1]+1);
//		}
//	}
//	if(ratings[mid]<ratings[mid+1])
//	{
//		if(every[mid]>=every[mid+1])
//		{
//			for(int i=mid+1;i<=ed;i++)
//				every[i]+=(every[mid]-every[mid+1]+1);
//		}
//	}
//
//}