#include <iostream>
using namespace std;

struct TreeNode {
	   int val;
       TreeNode *left;
       TreeNode *right;
       TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
bool isBalanced(TreeNode *root);
bool isBa(TreeNode *root,int &height);
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{

	return 0;
}
bool isBalanced(TreeNode *root)
{
	int height;
	return isBa(root,height);
}
bool isBa(TreeNode *root,int &height)
{
	if(root==NULL)
	{
		height=0;
		return true;
	}
	int left,right;
	if(isBa(root->left,left)&&isBa(root->right,right))
	{
		height=1+max(left,right);
		if(abs(left-right)<=1)
			return true;
		else
			return false;
	}
	return false;
}
