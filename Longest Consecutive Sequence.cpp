//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//using namespace std;
//
//int longestConsecutive(vector<int> &num);
//
//int main()
//{
//	vector<int>num;
//	num.push_back(0);
//	int re=longestConsecutive(num);
//	return 0;
//}
//
//int longestConsecutive(vector<int> &num) 
//{
//	unordered_map<int,bool>has;
//	for(int i=0;i<num.size();i++)
//		has.insert(make_pair(num[i],true));
//	int tmp;
//	int max_len=0;
//	int tmp_len=0;
//	int val=0;
//	for(int i=0;i<num.size();i++)
//	{
//		tmp_len=0;
//		val=num[i];
//		if(has[val]==false)
//			continue;
//		tmp_len++;
//		tmp=val;
//		while(has.find(--val)!=has.end())
//		{
//			if(has.find(val)->second==false)
//				break;
//			tmp_len++;
//			has.find(val)->second=false;
//		}
//		val=tmp;
//		while(has.find(++val)!=has.end())
//		{
//			if(has.find(val)->second==false)
//				break;
//			tmp_len++;
//			has.find(val)->second=false;
//		}
//		if(tmp_len>max_len)
//			max_len=tmp_len;
//	}
//	return max_len;
//}