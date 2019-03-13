/*
struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};*/
class Solution {
public:
	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (pRoot2 == NULL)
		{
			return false;
		}

		if (pRoot1 == NULL)
		{
			return false;
		}
		bool flag = isSubtree(pRoot1, pRoot2);
		if (flag != true)
		{
			flag = HasSubtree(pRoot1->left, pRoot2);
		}

		if (flag != true)
		{
			flag = HasSubtree(pRoot1->right, pRoot2);
		}

		return flag;


	}

	bool isSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (pRoot2 == NULL)
		{
			return true;
		}

		if (pRoot1 == NULL)
		{
			return false;
		}

		if (pRoot1->val != pRoot2->val)
		{
			return false;
		}
		else
		{
			return isSubtree(pRoot1->left, pRoot2->left) && isSubtree(pRoot1->right, pRoot2->right);
		}
	}
};