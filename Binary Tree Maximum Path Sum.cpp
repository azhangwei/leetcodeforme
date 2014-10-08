//#include <istream>
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
//int maxPathSum(TreeNode *root);
//int maxP(TreeNode *root,int &max);
//
//int main()
//{
//	TreeNode *root=new TreeNode(-2);
//    TreeNode *r=new TreeNode(-3);
//	TreeNode *l=new TreeNode(3);
//	TreeNode *rr=new TreeNode(8);
//	TreeNode *ll=new TreeNode(10);
//	//root->left=l;
//	root->right=r;
//	//l->left=ll;
//	//l->right=rr;
//	int en=maxPathSum(root);
//	return 0;
//}
//
//int maxPathSum(TreeNode *root)
//{
//	int max=-65535;
//	int oup=maxP(root,max);
//	if(oup>max)
//		return oup;
//	else
//	    return max;
//}
//
//int maxP(TreeNode *root,int &max)
//{
//    if(root->left==NULL&&root->right==NULL)
//		    return root->val;
//
//	int max1,max2;
//	if(root->left!=NULL)
//	    max1=maxP(root->left,max);
//	else
//		max1=-65535;
//	if(root->right!=NULL)
//	    max2=maxP(root->right,max);
//	else
//		max2=-65535;  
//
//	if(max1>max)
//		max=max1;
//	if(max2>max)
//		max=max2;
//
//	if(max1<0)
//		max1=0;
//	if(max2<0)
//		max2=0;
//
//	if(max1+max2+root->val>max)
//		max=max1+max2+root->val;
//
//    if(max1>max2)
//		return max1+root->val;
//	else
//		return max2+root->val;
//}