//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//vector<vector<string>> partition(string s);
//bool isHui(string s);
//bool isHui_dou(string s);
//void DF(string s,int len,vector<vector<int> >&pre,vector<string>&path,vector<vector<string> >&result);
//int minCut(string s);
//int main()
//{
//	string s="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
//	string sss="abbab";
//	string ss="apjesgpsxoeiokmqmfgvjslcjukbqxpsobyhjpbgdfruqdkeiszrlmtwgfxyfostpqczidfljwfbbrflkgdvtytbgqalguewnhvvmcgxboycffopmtmhtfizxkmeftcucxpobxmelmjtuzigsxnncxpaibgpuijwhankxbplpyejxmrrjgeoevqozwdtgospohznkoyzocjlracchjqnggbfeebmuvbicbvmpuleywrpzwsihivnrwtxcukwplgtobhgxukwrdlszfaiqxwjvrgxnsveedxseeyeykarqnjrtlaliyudpacctzizcftjlunlgnfwcqqxcqikocqffsjyurzwysfjmswvhbrmshjuzsgpwyubtfbnwajuvrfhlccvfwhxfqthkcwhatktymgxostjlztwdxritygbrbibdgkezvzajizxasjnrcjwzdfvdnwwqeyumkamhzoqhnqjfzwzbixclcxqrtniznemxeahfozp";
//	int re=minCut(sss);
//	return 0;
//}
//
//vector<vector<string>> partition(string s) 
//{
//	vector<vector<string>> result;
//		if(s.size()==0)
//			return result;
//	string s_dou;
//	for(int i=0;i<s.size()-1;i++)
//	{
//		s_dou=s_dou+s[i]+' ';
//	}
//	s_dou=s_dou+s[s.size()-1];
//
//	vector<vector<int> > pre(s.size()+1,vector<int>(s.size()));
//
//	for(int i=1;i<s_dou.size();i++)
//	{
//		int k=1;
//		while(1)
//		{
//			if(i-k>=0&&i+k<s_dou.size())
//			{
//				if(s_dou[i-k]!=s_dou[i+k])
//					break;
//				else
//				{
//					if((i+1)%2!=0)
//					{
//						pre[i+1-(i+1)/2+k/2][i-(i+1)/2-k/2]=1;
//					}
//					else
//						pre[(i+1)/2+(k+1)/2][(i+1)/2-(k+1)/2]=1;
//					k++;
//				}
//			}
//			else
//				break;
//		}
//	}
//	pre[1][0]=true;
//	pre[s.size()][s.size()-1]=true;
//
//	vector<string>path;
//	DF(s,s.size(),pre,path,result);
//	return result;
//}
//
//bool isHui(string s)
//{
//	int num=s.size();
//	for(int i=0;i<num/2;i++)
//	{
//		if(s[i]!=s[s.size()-i-1])
//			return false;
//	}
//	return true;
//}
//void DF(string s,int len,vector<vector<int> >&pre,vector<string>&path,vector<vector<string> >&result)
//{
//	if(len==0)
//	{
//		vector<string> re;
//		for(int i=path.size()-1;i>=0;i--)
//			re.push_back(path[i]);
//		result.push_back(re);
//	}
//	for(int i=len-1;i>=0;i--)
//	{
//		if(pre[len][i]==1)
//		{
//			path.push_back(s.substr(i,len-i));
//			DF(s,i,pre,path,result);
//			path.pop_back();
//		}
//	}
//}
//
//int minCut(string s)
//{
//	string s_dou;
//	for(int i=0;i<s.size()-1;i++)
//	{
//		s_dou=s_dou+s[i]+' ';
//	}
//	s_dou=s_dou+s[s.size()-1];
//	vector<vector<bool> > pre(s.size()+1,vector<bool>(s.size()));
//
//	for(int i=1;i<s_dou.size();i++)
//	{
//		int k=1;
//		while(1)
//		{
//			if(i-k>=0&&i+k<s_dou.size())
//			{
//				if(s_dou[i-k]!=s_dou[i+k])
//					break;
//				else
//				{
//					if((i+1)%2!=0)
//					{
//						pre[i+1-(i+1)/2+k/2][i-(i+1)/2-k/2]=true;
//					}
//					else
//						pre[(i+1)/2+(k+1)/2][(i+1)/2-(k+1)/2]=true;
//					k++;
//				}
//			}
//			else
//				break;
//		}
//	}
//	pre[1][0]=true;
//	pre[s.size()][s.size()-1]=true;
//
//	vector<int> mark(s.size()+1);
//	for(int i=1;i<=s.size();i++)
//	{
//		if(pre[i][0])
//		{
//			mark[i]=mark[0]+1;
//		}
//		else
//		{
//			for(int j=1;j<i;j++)
//			{
//				if(pre[i][j])
//				{
//					if(mark[i]==0)
//						mark[i]=mark[j]+1;
//					else
//					{
//						if(mark[i]>mark[j]+1)
//							mark[i]=mark[j]+1;
//					}
//				}
//			}
//		}
//
//	}
//	return mark[s.size()]-1;
//}
//
//bool isHui_dou(string s)
//{
//	string tmp;
//	for(int i=0;i<s.size()-1;i++)
//		tmp=tmp+s[i]+' ';
//	tmp=tmp+s[s.size()-1];
//	for(int i=0;i<tmp.size()/2;i++)
//	{
//		if(tmp[i]!=tmp[tmp.size()-i-1])
//			return false;
//	}
//	return true;
//}
//
