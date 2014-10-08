//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//using namespace std;
//
//vector<string> anagrams(vector<string> &strs);
//
//int main()
//{
//
//	return 0;
//}
//
//vector<string> anagrams(vector<string> &strs)
//{
//	unordered_map<string,vector<string> >mp;
//	vector<string>result;
//	string inp;
//    for(int i=0;i<strs.size();i++)
//	{
//		inp=strs[i];
//		sort(inp.begin(),inp.end());
//		mp[inp].push_back(strs[i]);
//	}
//	
//	for(unordered_map<string,vector<string> >::iterator i=mp.begin();i!=mp.end();i++)
//	{
//		if(i->second.size()>1)
//			result.insert(result.end(),i->second.begin(),i->second.end());
//	}
//	return result;
//}