//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int canCompleteCircuit(vector<int> &gas, vector<int> &cost);
//
//int main()
//{
//
//	return 0;
//}
//
//int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
//{
//    vector<int> remain(gas.size());
//	for(int i=0;i<gas.size();i++)
//		remain[i]=gas[i]-cost[i];
//	int N=0;
//	int start=0;
//	int next=0;
//	int size=gas.size();
//	int total=0;
//	int k=0;
//	while(N<gas.size())
//	{
//		k++;
//		if(total+remain[next]>=0)
//		{
//			total=total+remain[next];
//			next++;
//			N++;
//			next%=size;
//		}
//		else
//		{
//			N=0;
//			next++;
//			next%=size;
//			start=next;
//			total=0;
//		}
//		if(k>=2*size)
//			return -1;
//	}
//	return start;
//}