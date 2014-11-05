#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

TreeNode *sortedListToBST(ListNode *head);

int main()
{
	ListNode *test=new ListNode(1);
	ListNode *t=new ListNode(3);
	test->next=t;
	TreeNode *Head=sortedListToBST(test);
	return 0;
}
TreeNode *sortedListToBST(ListNode *head)
{
	int len=0;
	ListNode *tmp=head;
	if(head==NULL)
		return NULL;
	while(tmp)
	{
		len++;
		tmp=tmp->next;
	}
	len/=2;
	tmp=head;
	ListNode *last=tmp;
	while(len)
	{
		last=tmp;
		len--;
		tmp=tmp->next;
	}
	last->next=NULL;
	TreeNode *H=new TreeNode(tmp->val);
	if(tmp!=head)
	   H->left=sortedListToBST(head);
	else
	   H->left=NULL;
	tmp=tmp->next;
	H->right=sortedListToBST(tmp);
	return H;
}
