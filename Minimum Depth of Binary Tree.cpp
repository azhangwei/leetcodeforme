//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct TreeNode
//{
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//int minDepth(TreeNode *root);
//
//int main()
//{
//	TreeNode *ro=new TreeNode(1);
//	TreeNode *le=new TreeNode(2);
//	ro->left=le;
//	int dep=minDepth(ro);
//	return 0;
//}
//
//int minDepth(TreeNode *root)
//{
//	if(root==NULL)
//		return 0;
//	if(root->left==NULL&&root->right==NULL)
//		return 1;
//	int le=1;
//	int ri=1;
//	if(root->left!=NULL)
//	{
//		le+=minDepth(root->left);
//	}
//	if(root->right!=NULL)
//	{
//		ri+=minDepth(root->right);
//	}
//	return le>ri?ri:le;
//}