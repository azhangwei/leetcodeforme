//#include <iostream>
//
//using namespace std;
//
// struct ListNode
//  {
//      int val;
//      ListNode *next;
//      ListNode(int x) : val(x), next(NULL) {}
//  };
//
//ListNode *insertionSortList(ListNode *head);
//void insert(ListNode **head,ListNode *tmp);
//
//int main()
//{
//	ListNode *a=new ListNode(1);
//	ListNode *b=new ListNode(1);
//	ListNode *c=new ListNode(3);
//	ListNode *d=new ListNode(2);
//	a->next=b;
//	b->next=c;
//	c->next=d;
//	ListNode *n=insertionSortList(a);
//	return 0;
//}
//
//ListNode *insertionSortList(ListNode *head)
//{
//	if(head==NULL||head->next==NULL)
//		return head;
//
//	ListNode *new_head=new ListNode(0);
//	ListNode *inser=head;
//	ListNode *h=inser;
//	while(inser!=NULL)
//	{
//		h=h->next;
//		insert(&new_head->next,inser);
//		inser=h;
//	
//	}
//	return new_head->next;
//}
//void insert(ListNode **head,ListNode *tmp)
//{
//	tmp->next=NULL;
//	ListNode *tmp_head=*head;
//	ListNode *tmp_head_last=NULL;
//	bool mark=true;
//	if(*head==NULL)
//	{
//		*head=tmp;
//		return;
//	}
//	while(tmp->val>tmp_head->val)
//	{
//		if(tmp_head->next==NULL)
//		{
//			tmp_head->next=tmp;
//			return;
//		}
//		tmp_head_last=tmp_head;
//		tmp_head=tmp_head->next;
//		mark=false;
//	}
//	if(mark)
//	{
//		*head=tmp;
//		tmp->next=tmp_head;
//	}
//	else
//	{
//		tmp->next=tmp_head_last->next;
//		tmp_head_last->next=tmp;
//	}
//}