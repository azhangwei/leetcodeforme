//#include <iostream>
//#include <string>
//#include <vector>
//#include <list>
//#include <unordered_map>
//#include <unordered_set>
//#include <queue>
//using namespace std;
//
//int ladderLength(string start, string end, unordered_set<string> &dict);
//vector<vector<string>> findLadders(string start, string end, unordered_set<string> &dict);
//void  findLadderst(string start, string end, unordered_set<string> &dict,vector<vector<string>>&result,vector<string>&path);
//int main()
//{
//	string start="hot";
//	string end="dog";
//	unordered_set<string>dict;
//	dict.insert("hot");
//	dict.insert("dog");
//	dict.insert("dot");
//	vector<vector<string> > re=findLadders(start,end,dict);
//	return 0;
//}
//
//int ladderLength(string start, string end, unordered_set<string> &dict)
//{
//	/////////////////////////////////////////////我的方法，广度遍历，时间超。
//	//list<string> vol;
//	//vol.push_back(start);
//	//string vs;
//	//int len=start.size();
//	//int tmp_len=0;
//	//string vs_tmp;
//	//int result=0;
//	//bool ok=false;
//	//int num_for_once=1;
//	//int jishu;
//	//jishu=num_for_once;
//	//while(vol.size()>0)
//	//{
//	//	jishu--;
//	//	vs=vol.front();
//	//	vol.pop_front();
//	//	tmp_len=1;
//	//	for(int j=0;j<len;j++)
//	//	{
//	//		if(vs[j]!=end[j])
//	//		{
//	//			tmp_len--;
//	//			if(tmp_len<0)
//	//				break;
//	//		}
//	//	}
//	//	if(tmp_len==0)
//	//		return result+2;
//	//	for(unordered_set<string>::iterator i=dict.begin();i!=dict.end();i++)
//	//	{
//	//		tmp_len=1;
//	//		vs_tmp=*i;
//	//		for(int j=0;j<len;j++)
//	//		{
//	//			if(vs[j]!=vs_tmp[j])
//	//			{
//	//				tmp_len--;
//	//				if(tmp_len<0)
//	//					break;
//	//			}
//	//		}
//	//		if(tmp_len==0)
//	//		{
//	//			vol.push_back(vs_tmp);
//	//			num_for_once++;
//	//		}
//	//	}
//	//	if(jishu==0)
//	//	{
//	//		jishu=num_for_once;
//	//		num_for_once=0;
//	//		result++;
//	//	}
//	//}
//	//return 0;
//	////////////////////////////////////////////////////深度搜索
//	queue<string> vol;
//	unordered_map<string,int>mp;
//	vol.push(start);
//	mp[start]=1;
//	queue<int> step;
//	step.push(1);
//	int tep;
//	string ol;
//	string nex;
//	dict.insert(end);
//	while(vol.size()>0)
//	{
//	   ol=vol.front();
//	   vol.pop();
//	   tep=step.front();
//	   step.pop();
//	   if(ol==end)
//		   return tep;
//	   for(int i=0;i<ol.size();i++)
//	   { 
//		   nex=ol;
//		   for(char j='a';j<='z';j++)
//		   {
//			   if(ol[i]==j)
//				   continue;
//			   nex[i]=j;
//			   if(dict.find(nex)!=dict.end()&&mp.count(nex)==0)
//			   {
//				   mp[nex]=1;
//				   vol.push(nex);
//				   step.push(tep+1);
//			   }
//		   }
//	   }
//
//	}
//	return 0;
//}
//
//vector<vector<string>> findLadders(string start, string end, unordered_set<string> &dict)
//{
//	vector<vector<string>> result;
//	vector<string>path;
//	path.push_back(start);
//	findLadderst(start,end,dict,result,path);
//	return result;
//}
//
//void  findLadderst(string start, string end, unordered_set<string> &dict,vector<vector<string>>&result,vector<string>&path)
//{
//
//	if(start==end)
//	{
//		result.push_back(path);
//		return;
//	}
//	string nex;
//	for(int i=0;i<start.size();i++)
//	{ 
//		nex=start;
//		for(char j='a';j<='z';j++)
//		{
//			if(start[i]==j)
//				continue;
//			nex[i]=j;
//			if(dict.find(nex)!=dict.end())
//			{
//	            dict.erase(nex);
//				path.push_back(nex);
//				findLadderst(nex,end,dict,result,path);
//				path.pop_back();
//				dict.insert(nex);
//			}
//		}
//	}
//
//	return;
//}
//
