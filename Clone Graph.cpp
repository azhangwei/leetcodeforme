//#include <iostream>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//
//struct UndirectedGraphNode 
//{
//    int label;
//    vector<UndirectedGraphNode *> neighbors;
//    UndirectedGraphNode(int x) : label(x) {};
//};
//
//UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node);
//
//int main()
//{
//	UndirectedGraphNode *one=new UndirectedGraphNode(-1);
//	UndirectedGraphNode *two=new UndirectedGraphNode(1);
//	one->neighbors.push_back(two);
//	two->neighbors.push_back(one);
//	UndirectedGraphNode *en=cloneGraph(one);
//	return 0;
//}
//
//UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node)
//{
//	if(node==NULL)
//		return NULL;
//	vector <UndirectedGraphNode*> lis;
//	unordered_map<UndirectedGraphNode*,UndirectedGraphNode *> mp;
//	UndirectedGraphNode *ne_node=new UndirectedGraphNode(node->label);
//	UndirectedGraphNode *tmp;
//	UndirectedGraphNode *neigh;
//	UndirectedGraphNode *new_tu;
//	mp.insert(make_pair(node,ne_node));
//	lis.push_back(node);
//	while(lis.size())
//	{
//		tmp=lis.back();
//		lis.pop_back();
//		new_tu=mp.find(tmp)->second;
//		for(int i=0;i<tmp->neighbors.size();i++)
//		{
//			neigh=tmp->neighbors[i];
//			if(mp.find(neigh)!=mp.end())
//			{
//				new_tu->neighbors.push_back(mp.find(neigh)->second);
//			}
//			else
//			{
//				UndirectedGraphNode *nex=new UndirectedGraphNode(neigh->label);
//				new_tu->neighbors.push_back(nex);
//				lis.push_back(neigh);
//				mp.insert(make_pair(neigh,nex));
//			}
//		}
//	}
//	return ne_node;
//}