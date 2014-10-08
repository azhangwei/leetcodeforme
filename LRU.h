#include <map>
#include <vector>
#include <unordered_map>
using namespace std;
///////////////////////////////我的笨方法，三个数组。
//class LRUCache
//{
//
//public:
//
//	LRUCache(int capacity) 
//	{
//		cap=capacity;
//		for(int i=0;i<cap;i++)
//		{
//			mark.push_back(-1);
//			fir.push_back(-1);
//			sec.push_back(-1);
//		}
//	}
//
//	int get(int key)
//	{
//		for(int i=0;i<cap;i++)
//		{
//			
//			if(mark[i]==-1)
//				break;
//			mark[i]++;
//			if(fir[i]==key)
//			{
//				return sec[i];
//				mark[i]=0;
//			}
//		}
//		return -1;
//	}
//
//	void set(int key, int value)
//	{
//		int i;
//		for( i=0;i<cap;i++)
//		{
//			if(mark[i]==-1)	
//			{
//				mark[i]=0;
//				fir[i]=key;
//				sec[i]=value;
//			}
//			if(fir[i]==key)
//			{
//				sec[i]=value;
//				break;
//			}
//		}
//		int min=0;
//		int min_val=mark[0];
//		for(int j=1;j<cap;j++)
//		{
//			if(mark[j]>min_val)
//			{
//				min_val=mark[j];
//				min=j;
//			}
//		}
//		mark[min]=0;
//		fir[min]=key;
//		sec[min]=value;
//	}
//private:
//	int cap;
//	vector<int> mark;
//	vector<int> fir;
//	vector<int> sec;
//};
//////////////////////////////////////////////map+双向链表（logN）

//struct Node
//{
//	int val;
//	int key;
//	Node *next;
//	Node *pre;
//	Node(int key,int val):val(val),key(key),next(NULL),pre(NULL){};
//};
//
//class LRUCache
//{
//   map<int,Node*>mp;
//   int cap;
//   Node *head;
//   Node *tail;
//public:
//
//	LRUCache(int capacity) 
//	{
//		if(capacity<1)
//			return;
//		mp.clear();
//		cap=capacity;
//		head=new Node(0,0);
//		tail=new Node(0,0);
//		head->next=tail;
//		tail->pre=head;
//	}
//
//	int get(int key)
//	{
//		map<int,Node *>::iterator i=mp.begin();
//		Node *tmp;
//		i=mp.find(key);
//		if(i!=mp.end())
//		{
//			tmp=i->second;
//			tmp->pre->next=tmp->next;
//			tmp->next->pre=tmp->pre;
//			/////////放到头部
//			head->next->pre=tmp;
//			tmp->next=head->next;
//			head->next=tmp;
//			tmp->pre=head;
//		}
//		else
//		{
//			return -1;
//		}
//		return tmp->val;
//	}
//
//	void set(int key, int value)
//	{
//	     map<int,Node *>::iterator i=mp.begin();
//		 Node *tmp;
//		 i=mp.find(key);
//		 if(i!=mp.end())
//		 {
//			 tmp=i->second;
//			 tmp->val=value;
//			 /////// 调整
//			 tmp->pre->next=tmp->next;
//			 tmp->next->pre=tmp->pre;
//			 /////////放到头部
//			 head->next->pre=tmp;
//			 tmp->next=head->next;
//			 head->next=tmp;
//			 tmp->pre=head;
//		 }
//		 else
//		 {
//			 Node *ne=new Node(key,value);
//			 mp.insert(make_pair(key,ne));
//			 /////////放到头部
//			 head->next->pre=ne;
//			 ne->next=head->next;
//			 head->next=ne;
//			 ne->pre=head;
//		 }
//		 if(mp.size()>cap)
//		 {
//			 Node *del=tail->pre;
//			 del->pre->next=tail;
//			 tail->pre=del->pre;
//			 i=mp.find(del->key);
//			 mp.erase(i);
//		 }
//
//	}
//
//};

////////////////////////////////////hash+双向链表

//struct Node
//{
//	int val;
//	int key;
//	Node *next;
//	Node *pre;
//	Node(int key,int val):val(val),key(key),next(NULL),pre(NULL){};
//};
//
//class LRUCache
//{
//	unordered_map <int,Node*> mp;
//	int cap;
//	Node *head;
//	Node *tail;
//public:
//
//	LRUCache(int capacity) 
//	{
//		if(capacity<1)
//			return;
//		mp.clear();
//		cap=capacity;
//		head=new Node(0,0);
//		tail=new Node(0,0);
//		head->next=tail;
//		tail->pre=head;
//	}
//
//	int get(int key)
//	{
//		unordered_map<int,Node *>::iterator i=mp.begin();
//		Node *tmp;
//		i=mp.find(key);
//		if(i!=mp.end())
//		{
//			tmp=i->second;
//			tmp->pre->next=tmp->next;
//			tmp->next->pre=tmp->pre;
//			/////////放到头部
//			head->next->pre=tmp;
//			tmp->next=head->next;
//			head->next=tmp;
//			tmp->pre=head;
//		}
//		else
//		{
//			return -1;
//		}
//		return tmp->val;
//	}
//
//	void set(int key, int value)
//	{
//		unordered_map<int,Node *>::iterator i=mp.begin();
//		Node *tmp;
//		i=mp.find(key);
//		if(i!=mp.end())
//		{
//			tmp=i->second;
//			tmp->val=value;
//			/////// 调整
//			tmp->pre->next=tmp->next;
//			tmp->next->pre=tmp->pre;
//			/////////放到头部
//			head->next->pre=tmp;
//			tmp->next=head->next;
//			head->next=tmp;
//			tmp->pre=head;
//		}
//		else
//		{
//			Node *ne=new Node(key,value);
//			mp.insert(make_pair(key,ne));
//			/////////放到头部
//			head->next->pre=ne;
//			ne->next=head->next;
//			head->next=ne;
//			ne->pre=head;
//		}
//		if(mp.size()>cap)
//		{
//			Node *del=tail->pre;
//			del->pre->next=tail;
//			tail->pre=del->pre;
//			i=mp.find(del->key);
//			mp.erase(i);
//		}
//
//	}
//
//};