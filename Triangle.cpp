//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int minimumTotal(vector<vector<int> > &triangle);
//
//int main()
//{
//	vector<int>one;
//	one.push_back(1);
//	vector<int>on;
//	on.push_back(3);
//	on.push_back(2);
//	vector<vector<int>>en;
//	en.push_back(one);
//	en.push_back(on);
//	int re=minimumTotal(en);
//	return 0;
//}
//
//int minimumTotal(vector<vector<int> > &triangle)
//{
//	int high=triangle.size();
//	int min;
//	if(high<2)
//		return triangle[0][0];
//	for(int i=high-2;i>=0;i--)
//	{
//		for(int j=0;j<triangle[i].size();j++)
//		{
//			min=triangle[i+1][j]>triangle[i+1][j+1]?triangle[i+1][j+1]:triangle[i+1][j];
//			triangle[i][j]+=min;
//		}
//	}
//	return triangle[0][0];
//}