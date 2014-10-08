//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<vector<int> > combinationSum(vector<int> &candidates, int target);
//void comb(vector<int> &candidates, int target,vector<int>&path,vector<vector<int> > &result,int start);
//
//int main()
//{
//	vector<int> a;
//	a.push_back(2);
//	a.push_back(3);
//	a.push_back(6);
//	a.push_back(7);
//	vector<vector<int> >re=combinationSum(a,7);
//	return 0;
//}
//
//vector<vector<int> > combinationSum(vector<int> &candidates, int target)
//{
//	vector<int>path;
//	vector<vector<int> >result;
//	sort(candidates.begin(),candidates.end());
//	comb(candidates,target,path,result,0);
//	return result;
//}
//
//void comb(vector<int> &candidates, int target,vector<int>&path,vector<vector<int> > &result,int start)
//{
//	if(target==0)
//	{
//		result.push_back(path);
//		return;
//	}
//	for(int i=start;i<candidates.size();i++)
//	{
//		if(target-candidates[i]>=0)
//		{
//			path.push_back(candidates[i]);
//			comb(candidates,target-candidates[i],path,result,i+1);
//			path.pop_back();
//		}
//	}
//}