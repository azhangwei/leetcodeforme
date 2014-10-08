//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int maxProfit(vector<int> &prices);
//int maxProfit_two(vector<int> &prices);
//int maxProfit_three(vector<int> &prices);
//int main()
//{
//	vector<int>aa;
//	aa.push_back(2);
//	aa.push_back(1);
//	aa.push_back(4);
//	aa.push_back(5);
//	aa.push_back(2);
//	aa.push_back(9);
//	aa.push_back(7);
//	int en=maxProfit_three(aa);
//
//	return 0;
//}
//
//int maxProfit(vector<int> &prices)
//{
//	if(prices.size()==0)
//		return 0;
//	vector<int>pr;
//	for(int i=1;i<prices.size();i++)
//		pr.push_back(prices[i]-prices[i-1]);
//	if(pr.size()==0)
//		return 0;
//	int tmp_max=0;
//	int tmp=tmp_max;
//	for(int i=0;i<pr.size();i++)
//	{
//		if(tmp+pr[i]<0)
//		{
//			tmp=0;
//			continue;
//		}
//		tmp+=pr[i];
//		if(tmp>tmp_max)
//			tmp_max=tmp;
//	}
//	return tmp_max;
//}
//
//int maxProfit_two(vector<int> &prices)
//{
//	if(prices.size()==0)
//		return 0;
//	vector<int>pr;
//	for(int i=1;i<prices.size();i++)
//		pr.push_back(prices[i]-prices[i-1]);
//	if(pr.size()==0)
//		return 0;
//	int tmp_max=0;
//	int tmp=tmp_max;
//	for(int i=0;i<pr.size();i++)
//	{
//		if(pr[i]<0)
//			continue;
//		tmp_max+=pr[i];
//	}
//	return tmp_max;
//}
//
//int maxProfit_three(vector<int> &prices)
//{
//	if(prices.size()<2)
//		return 0;
//	vector<int>f(prices.size(),0);
//	vector<int>g(prices.size(),0);
//	int i=0;
//	int min_f=prices[0];
//	int max_g=prices[prices.size()-1];
//	int profit_f=0;
//	int profit_g=0;
//	for( i=1;i<prices.size();i++)
//	{
//	    profit_f=profit_f>(prices[i]-min_f)?profit_f:(prices[i]-min_f);
//		min_f=min_f>prices[i]?prices[i]:min_f;
//		f[i]=profit_f;
//
//		profit_g=profit_g>(max_g-prices[prices.size()-i-1])?profit_g:(max_g-prices[prices.size()-i-1]);
//		max_g=max_g<prices[prices.size()-i-1]?prices[prices.size()-i-1]:max_g;
//		g[prices.size()-i-1]=profit_g;
//	}
//	int max_rul=0;
//	for(int i=0;i<prices.size();i++)
//	{
//		max_rul=max_rul>(f[i]+g[i])?max_rul:(f[i]+g[i]);
//	}
//	return max_rul;
//
//}