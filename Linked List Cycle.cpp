//#include <iostream>
//#include <set>
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
//bool hasCycle(ListNode *head);
// ListNode *detectCycle(ListNode *head);
//
//int main()
//{
//
//	return 0;
//}
//
//bool hasCycle(ListNode *head)
//{
//	if(head==NULL||head->next==NULL)
//		return false;
//	ListNode *quick;
//	ListNode *slow;
//	quick=head->next;
//	slow=head;
//	bool yes=false;
//	int num=0;
//	while(quick!=NULL)
//	{
//		if(quick!=slow)
//		{
//			quick=quick->next;
//			num++;
//			if(num==2)
//			{
//			   yes=true;
//			   num=0;
//			}
//		}
//		else
//			return true;
//		if(yes)
//		{
//			slow=slow->next;
//			yes=false;
//		}
//	}
//	return false;
//}
//
// ListNode *detectCycle(ListNode *head)
// {
//	 set<ListNode*>only;
//	 ListNode *fir=head;
//	 if(head==NULL||head->next==NULL)
//		 return NULL;
//	 while(fir!=NULL)
//	 {
//		 if(only.count(fir))
//			 return fir;
//		 else
//		 {
//			 only.insert(fir);
//			 fir=fir->next;
//		 }
//	 }
//	 return NULL;
// }