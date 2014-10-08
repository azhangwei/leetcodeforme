//#include <iostream>
//#include <unordered_set>
//#include <vector>
//#include <hash_map>
//#include <unordered_map>
//using namespace std;
//
//struct RandomListNode 
//{
//    int label;
//    RandomListNode *next, *random;
//    RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
//};
//
//RandomListNode *copyRandomList(RandomListNode *head);
//
//int main()
//{
//	RandomListNode *ce=new RandomListNode(-1);
//	RandomListNode *c2=new RandomListNode(-1);
//	ce->next=c2;
//	RandomListNode *co=copyRandomList(ce);
//	return 0;
//}
//
//RandomListNode *copyRandomList(RandomListNode *head)
//{
//	////////////////////////////////////////////////////////////////////////Ê±¼ä³¬
//	//RandomListNode *new_head=NULL;
//	//RandomListNode *tmp_new=NULL;
//	//RandomListNode *tmp_head=head;
//	//unordered_set<RandomListNode*> Old;
//	//unordered_set<RandomListNode*> New;
//	//vector<int>label_new;
//	//if(head==NULL)
//	//	return NULL;
//	//while(tmp_head!=NULL)
//	//{
//	//	if(new_head==NULL)
//	//	{
//	//		RandomListNode *tmp=new RandomListNode(tmp_head->label);
//	//		new_head=tmp;
//	//		tmp_new=tmp;
//	//		Old.insert(tmp_head);
//	//		New.insert(new_head);
//	//		label_new.push_back(tmp_head->label);
//	//	}
//	//	else
//	//	{
//	//	   RandomListNode *tmp=new RandomListNode(tmp_head->label);
//	//	   new_head->next=tmp;
//	//	   new_head=new_head->next;
//	//	   Old.insert(tmp_head);
//	//	   New.insert(tmp);
//	//	   label_new.push_back(tmp_head->label);
//	//	}
//	//	tmp_head=tmp_head->next;
//	//}
//	//new_head=tmp_new;
//	//tmp_head=head;
//	//unordered_set<RandomListNode *>::iterator i=Old.begin();
//	//unordered_set<RandomListNode *>::iterator j=New.begin();
//	//int k;
// //   while(tmp_head!=NULL)
//	//{
//	//	i=Old.begin();
//	//	j=New.begin();
//	//	RandomListNode *tmp=tmp_head->random;
//	//	i=Old.find(tmp);
//	//	if(i==Old.end())
//	//	{
//	//		tmp_new=tmp_new->next;
//	//		tmp_head=tmp_head->next;
//	//		continue;
//	//	}
//	//	for( k=0;k<label_new.size();k++)
//	//	{
//	//		if(label_new[k]==(*i)->label)
//	//			break;
//	//		j++;
//	//	}
//	//	tmp_new->random=*j;
//	//	tmp_new=tmp_new->next;
//	//	tmp_head=tmp_head->next;
//	//}
//	//return new_head;
//    /////////////////////////////////////////////////////////////////////  hashmap
//	unordered_map <RandomListNode*,RandomListNode *>mp;
//	RandomListNode *old_head=head;
//	RandomListNode *new_head=NULL;
//	RandomListNode *tmp_new_head=NULL;
//	if(head==NULL)
//		return NULL;
//	while(old_head!=NULL)
//	{
//		RandomListNode *tmp=new RandomListNode(old_head->label);
//		if(new_head==NULL)
//		{
//			new_head=tmp;
//			tmp_new_head=tmp;
//		}
//		else
//		{
//			tmp_new_head->next=tmp;
//			tmp_new_head=tmp_new_head->next;
//		}
//		mp.insert(make_pair(old_head,tmp));
//		old_head=old_head->next;
//	}
//	old_head=head;
//	tmp_new_head=new_head;
//	while(old_head!=NULL)
//	{
//		tmp_new_head->random=mp[old_head->random];
//		old_head=old_head->next;
//		tmp_new_head=tmp_new_head->next;
//	}
//	return new_head;
//	/////////////////////////////////////////////////////////////////////// double Á´±í
//	//if(head==NULL)
//	//	return NULL;
// //   RandomListNode *dou=NULL;
//	//RandomListNode *old=head;
//	//RandomListNode *new_head=NULL;
//	//while(old!=NULL)
//	//{
//	//	RandomListNode *tmp=new RandomListNode(old->label);
//	//	if(old->random!=NULL)
//	//	  tmp->random=old->random->next;
//	//	tmp->next=old->next;
//	//	old->next=tmp;
//	//	old=old->next->next;
//	//}
//	//old=head;
//	//dou=old->next;
//	//new_head=dou;
//	//while(dou->next!=NULL)
//	//{
//	//	old->next=old->next->next;
//	//	dou->next=dou->next->next;
//	//	old=old->next;
//	//	dou=dou->next;
//	//}
//	//old->next=NULL;
//	//return new_head;
//}