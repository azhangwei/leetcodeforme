//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//struct TreeNode
//{
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//int sumNumbers(TreeNode *root);
//void N(TreeNode *root,vector<int>&num,vector<int>&result);
//
//int main()
//{
//	TreeNode *A=new TreeNode(0);
//	TreeNode *B=new TreeNode(1);
//	TreeNode *C=new TreeNode(3);
//	A->left=B;
//	A->right=C;
//	int result=sumNumbers(A);
//	return 0;
//}
//
//int sumNumbers(TreeNode *root)
//{
//	if(root==NULL)
//		return 0;
//	vector<int>num;
//	vector<int>result;
//	num.push_back(root->val);
//	N(root,num,result);
//	int re=0;
//	for(int i=0;i<result.size();i++)
//		re+=result[i];
//	return re;
//}
//
//void N(TreeNode *root,vector<int>&num,vector<int>&result)
//{
//	if(root->left==NULL&&root->right==NULL)
//	{
//		int val=0;
//		for(int i=0;i<num.size();i++)
//		{
//			val=val*10+num[i];
//		}
//		result.push_back(val);
//		return;
//	}
//	if(root->left!=NULL)
//	{
//		num.push_back(root->left->val);
//	    N(root->left,num,result);
//		num.pop_back();
//	}
//	if(root->right!=NULL)
//	{
//		num.push_back((root->right->val));
//	    N(root->right,num,result);
//		num.pop_back();
//	}
//}