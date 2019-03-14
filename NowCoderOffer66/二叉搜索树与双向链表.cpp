/***
输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。
要求不能创建任何新的结点，只能调整树中结点指针的指向

***/

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
	TreeNode* Convert(TreeNode* pRootOfTree)
	{
		stack<TreeNode*>mystack;
		TreeNode*root = NULL;
		TreeNode*pre = NULL;
		TreeNode*cur = pRootOfTree;
		while (!mystack.empty() || cur != NULL)
		{
			if (cur == NULL)
			{
				cur = mystack.top();
				mystack.pop();

				if (root == NULL)
				{
					root = cur;
				}

				if (pre == NULL)
				{
					cur->left = NULL;
					pre = cur;
				}
				else
				{
					pre->right = cur;
					cur->left = pre;
					pre = cur;
				}
				cur = cur->right;
			}
			else
			{
				mystack.push(cur);
				cur = cur->left;
			}
		}
		return root;
	}
};