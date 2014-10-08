//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//struct ListNode 
//{
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//void reorderList(ListNode *head);
//        
//int main()
//{
//	ListNode *a=new ListNode(1);
//	ListNode *b=new ListNode(2);
//	ListNode *c=new ListNode(3);
//	ListNode *d=new ListNode(4);
//	ListNode *e=new ListNode(5);
//	a->next=b;
//	b->next=c;
//	c->next=d;
//	d->next=e;
//	reorderList(a);
//	return 0;
//}
//
//void reorderList(ListNode *head)
//{
//	////////////////////////////////方法一 时间超
//	//if(head==NULL)
//	//	return;
//	//ListNode *first=head;
//	//ListNode *tail=head;
//	//ListNode *tmp_tail=tail;
//	//bool ou=true;
//	//int num=1;
//	//while(tail->next!=NULL)
//	//{
//	//	num++;
//	//	tail=tail->next;
//	//}
//	//if(num%2!=0)
//	//	ou=false;
//	//int len=num/2;
//	//tail=head;
//	//for(int i=0;i<len;i++)
//	//	tail=tail->next;
//	//tmp_tail=tail;
//	//tail=tail->next;
//	//tmp_tail->next=NULL;
//	//int tmp_len=len;
//	//if(ou)
//	//{
//	//	tmp_len=len-1;
//	//	len=len-2;
//	//}
//	//else
//	//{
//	//	tmp_len=len;
//	//	len=len-1;
//	//}
//	//tmp_tail=tail;
//	//for(int i=tmp_len;i>0;i--)
//	//{
//	//	first=head;
//	//	tail=tmp_tail;
//	//	for(int j=0;j<i-1;j++)
//	//	{
//	//		first=first->next;
//	//	}
//	//	tmp_tail=tail->next;
//	//    tail->next=first->next;
//	//	first->next=tail;
//	//	
//	//}
//	/////////////////////////////////////////////用vector 
//	if(head==NULL)
//		return;
//	vector<ListNode*>tmp;
//	ListNode *first=head;
//	ListNode *first_next=head->next;
//	ListNode *tail=head;
//	ListNode *tmp_tail=tail;
//	bool ou=true;
//	int num=1;
//	while(tail->next!=NULL)
//	{
//		num++;
//		tail=tail->next;
//	}
//	if(num%2!=0)
//		ou=false;
//	int len=num/2;
//	tail=head;
//	for(int i=0;i<len;i++)
//		tail=tail->next;
//	tmp_tail=tail;
//	tail=tail->next;
//	tmp_tail->next=NULL;
//	while(tail!=NULL)
//	{
//		tmp.push_back(tail);
//		tail=tail->next;
//	}
//	for(int  i=0;i<tmp.size();)
//	{
//		tmp_tail=tmp.back();
//		tmp.pop_back();
//		tmp_tail->next=first_next;
//		first->next=tmp_tail;
//
//		first=first_next;
//		first_next=first_next->next;
//	}
//}