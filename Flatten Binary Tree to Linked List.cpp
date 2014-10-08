//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//void flatten(TreeNode *root);
//void fla(TreeNode *root,vector<TreeNode*>&qian);
//
//int main()
//{
//	TreeNode *ro=new TreeNode(1);
//	TreeNode *le=new TreeNode(2);
//	TreeNode *ri=new TreeNode(3);
//	ro->left=le;
//	ro->right=ri;
//	flatten(ro);
//	return 0;
//}
//
//void flatten(TreeNode *root)
//{
//	if(root==NULL)
//		return;
//	vector<TreeNode*>qian;
//	fla(root,qian);
//	TreeNode *tmp=root;
//	root->left=NULL;
//	root->right=NULL;
//	for(int i=1;i<qian.size();i++)
//	{
//		tmp->right=qian[i];
//		tmp=tmp->right;
//	}
//	return;
//}
//void fla(TreeNode *root,vector<TreeNode*>&qian)
//{
//	if(root==NULL)
//		return;
//	qian.push_back(root);
//	fla(root->left,qian);
//	fla(root->right,qian);
//}