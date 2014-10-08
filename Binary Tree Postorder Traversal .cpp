//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct TreeNode
//{
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//vector<int> postorderTraversal(TreeNode *root);
//void posT(TreeNode *root,vector<int>&oup);
//vector<int> preorderTraversal(TreeNode *root);
//void preT(TreeNode *root,vector<int>&oup);
//
//int main()
//{
//
//	return 0;
//}
//
//vector<int> postorderTraversal(TreeNode *root)
//{
//	vector<int> oup;
//	posT(root,oup);
//	return oup;
//}
//
//void posT(TreeNode *root,vector<int>&oup)
//{
//	if(root==NULL)
//		return;
//	posT(root->left,oup);
//	posT(root->right,oup);
//	oup.push_back(root->val);
//
//}
//
//vector<int> preorderTraversal(TreeNode *root)
//{
//	vector<int>oup;
//	preT(root,oup);
//	return oup;
//}
//void preT(TreeNode *root,vector<int>&oup)
//{
//	if(root==NULL)
//		return;
//	oup.push_back(root->val);
//	preT(root->left,oup);
//	preT(root->right,oup);
//}