//#include <iostream>
//#include <unordered_set>
//#include <string>
//using namespace std;
//
//bool wordBreak(string s, unordered_set<string> &dict);
//vector<string> wordBreak_two(string s, unordered_set<string> &dict);
//void get_path(string s,vector<vector<bool> >pre,int len,vector<string> &path,vector<string> &result);
//int main()
//{
//	string a="a";
//	unordered_set<string> dic;
//	dic.insert("a");
//	//dic.insert("aa");
//	//dic.insert("b");
//	//dic.insert("cd");
//	vector<string> test=wordBreak_two(a,dic);
//	return 0;
//}
//
//bool wordBreak(string s, unordered_set<string> &dict)
//{
//////////////////////////////////////第一种方法，递归，时间超。
//	//string s_part;
//	//if(dict.count(s))
//	//	return true;
//	//for(int i=0;i<s.size()-1;i++)
//	//{
//	//	s_part=s_part+s[i];
//	//	string tmp(s,i+1);
//	//	if(dict.count(s_part)&&wordBreak(tmp,dict))
//	//		return true;
//	//}
//	//return false;
///////////////////////////////////////////////////  第二中方法，动态规划
//    bool *mark=new bool[s.size()];
//	memset(mark,false,s.size());
//	for(int i=0;i<s.size();i++)
//	{
//		string tmp=s.substr(0,i+1);
//		if(dict.count(tmp))
//		{
//			mark[i]=true;
//			continue;
//		}
//		else
//		{
//			for(int j=0;j<i;j++)
//			{
//				if(mark[j])
//				{
//					mark[i]=dict.count(s.substr(j+1,i-j))||mark[i];
//				}
//			}
//		}
//	}
//	return mark[s.size()-1];
//}
//
//vector<string> wordBreak_two(string s, unordered_set<string> &dict)
//{   
//	vector<bool> mark(s.size()+1,false);
//	vector<vector<bool> >pre(s.size()+1,vector<bool>(s.size()));
//	mark[0]=true;
//	for(int i=1;i<=s.size();++i)
//	{
//	    for(int j=i-1;j>=0;--j)
//		{
//			if(mark[j]&&dict.find(s.substr(j,i-j))!=dict.end())
//			{
//				mark[i]=true;
//				pre[i][j]=true;
//			}
//		}
//	}
//	vector<string> result;
//	vector<string> path;
//	get_path(s,pre,s.size(),path,result);
//	return result;
//}
//
//void get_path(string s,vector<vector<bool> >pre,int len,vector<string> &path,vector<string> &result)
//{
//	if(len==0)
//	{
//		string in_result;
//		for(int i=path.size()-1;i>0;i--)
//			in_result=in_result+path[i]+" ";
//		in_result=in_result+path[0];
//		result.push_back(in_result);
//	}
//	for(int i=0;i<len;i++)
//	{
//			if(pre[len][i]==true)
//			{
//				path.push_back(s.substr(i,len-i));
//				get_path(s,pre,i,path,result);
//				path.pop_back();
//			}
//		
//	}
//}
//
