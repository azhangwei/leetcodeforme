//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<vector<int> > generate(int numRows);
//
//int main()
//{
//	vector<vector<int>> gen;
//	gen=generate(5);
//	return 0;
//}
//
//vector<vector<int> > generate(int numRows)
//{
//
//	vector<vector<int> >en;
//	if(numRows==0)
//		return en;
//	vector<int>first;
//	vector<int>second;
//	first.push_back(1);
//	en.push_back(first);
//	second=first;
//	if(numRows==1)
//		return en;
//	for(int i=1;i<numRows;i++)
//	{
//		first.clear();
//		first.push_back(second[0]);
//		for(int j=0;j<second.size()-1;j++)
//		{
//			first.push_back(second[j+1]+second[j]);
//		}
//		first.push_back(second[second.size()-1]);
//		en.push_back(first);
//		second=first;
//	}
//	return en;
//}