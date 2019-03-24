/*
struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};
*/
class Solution {
public:
	bool isSymmetrical(TreeNode* pRoot)
	{
		if (pRoot == NULL)
		{
			return true;
		}

		if (pRoot->left == NULL && pRoot->right == NULL)
		{
			return true;
		}

		return isMirror(pRoot->left, pRoot->right);
	}

	bool isMirror(TreeNode* T1, TreeNode*T2)
	{


		if (T1 != NULL && T2 == NULL)
		{
			return false;
		}

		if (T1 == NULL && T2 != NULL)
		{
			return false;
		}

		if (T1->val == T2->val)
		{
			if (T1->left == NULL && T2->left == NULL && T1->right == NULL && T2->right == NULL)
			{
				return true;
			}


			else if (T1->right == NULL && T2->left == NULL)
			{
				return isMirror(T1->left, T2->right);
			}
			else if (T1->left == NULL && T2->right == NULL)
			{
				return isMirror(T1->right, T2->left);
			}
			else if (T1->left != NULL && T2->left != NULL && T1->right != NULL && T2->right != NULL)
			{
				return isMirror(T1->left, T2->right) && isMirror(T1->right, T2->left);
			}
		}

		return false;



	}

};