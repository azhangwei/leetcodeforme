//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//bool hasPathSum(TreeNode *root, int sum);
//vector<vector<int> > pathSum(TreeNode *root, int sum);
//void has(TreeNode *root,int sum,vector<vector<int>>&re,vector<int>&tm_path);
//int main()
//{
//	TreeNode *ro=new TreeNode(1);
//	TreeNode *le=new TreeNode(-2);
//	TreeNode *ri=new TreeNode(3);
//	ro->left=le;
//	ro->right=ri;
//	vector<vector<int>>re=pathSum(ro,-1);
//	return 0;
//}
//
//bool hasPathSum(TreeNode *root, int sum)
//{
//	if(root==NULL)
//		return false;
//	if(root->left==NULL&&root->right==NULL)
//		if(sum==root->val)
//			return true;
//		else
//			return false;
//	if(root->left!=NULL)
//	{
//		root->left->val+=root->val;
//		if(hasPathSum(root->left,sum))
//			return true;
//	}
//	if(root->right!=NULL)
//	{
//		root->right->val+=root->val;
//		if(hasPathSum(root->right,sum))
//			return true;
//	}
//	return false;
//}
//vector<vector<int> > pathSum(TreeNode *root, int sum)
//{
//	vector<int>tm_path;
//	vector<vector<int>>re;
//	if(root==NULL)
//		return re; 
//	has(root,sum,re,tm_path);
//	return re;
//}
//
//void has(TreeNode *root,int sum,vector<vector<int>>&re,vector<int>&tm_path)
//{
//	if(root->left==NULL&&root->right==NULL)
//	{
//		if(root->val==sum)
//		{
//			tm_path.push_back(sum);
//			re.push_back(tm_path);
//			tm_path.pop_back();
//		}
//		return;
//	}
//	if(root->left!=NULL)
//	{
//		tm_path.push_back(root->val);
//		sum-=root->val;
//		has(root->left,sum,re,tm_path);
//		tm_path.pop_back();
//		sum+=root->val;
//	}
//	if(root->right!=NULL)
//	{
//		tm_path.push_back(root->val);
//		sum-=root->val;
//		has(root->right,sum,re,tm_path);
//		tm_path.pop_back();
//		sum+=root->val;
//	}
//	return;
//}