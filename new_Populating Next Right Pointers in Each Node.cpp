#include <iostream>
#include <queue>
using namespace std;

struct TreeLinkNode {
   int val;
   TreeLinkNode *left, *right, *next;
   TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
  };
void connect(TreeLinkNode *root);

int main()
{
	TreeLinkNode *root=new TreeLinkNode(0);
	TreeLinkNode *left=new TreeLinkNode(1);
	TreeLinkNode *right=new TreeLinkNode(2);
	TreeLinkNode *one=new TreeLinkNode(3);
	TreeLinkNode *two=new TreeLinkNode(4);
	TreeLinkNode *three=new TreeLinkNode(5);
	TreeLinkNode *four=new TreeLinkNode(6);
	root->left=left;
	root->right=right;
	left->left=one;
	left->right=two;
	right->left=three;
	right->right=four;
	connect(root);
	return 0;
}

void connect(TreeLinkNode *root)
{
	/////////////////////////////////the first of me ,time out;
	//queue<TreeLinkNode*> vol;
	//if(root==NULL)
	//	return;
	//vol.push(root);
	//TreeLinkNode *first=NULL;
	//TreeLinkNode *second=NULL;
	//while(vol.size())
	//{
	//	int len=vol.size();
	//	first=NULL;
	//	for(int i=0;i<len;i++)
	//	{
	//		second=first;
	//		first=vol.front();
	//		vol.pop();
	//		if(first->left!=NULL)
	//			vol.push(first->left);
	//		if(first->right!=NULL)
	//			vol.push(first->right);
	//		if(second!=NULL)
	//			second->next=first;
	//	}
	//}
	//return;

/////////////////////////////the second
	TreeLinkNode *Rt=root;
	TreeLinkNode *first=NULL;
	TreeLinkNode *second=NULL;
	while(Rt)
	{
		first=Rt;
		second=NULL;
		for(;Rt;Rt=Rt->next)
		{
			if(Rt->left!=NULL)
			{
				if(second!=NULL)
					second->next=Rt->left;
				if(Rt->right!=NULL)
				{
					Rt->left->next=Rt->right;
					second=Rt->right;
				}
			}

		}
		Rt=first->left;
	}
	return ;

}
