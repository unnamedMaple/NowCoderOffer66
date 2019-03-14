/***
����һ�ö��������������ö���������ת����һ�������˫������
Ҫ���ܴ����κ��µĽ�㣬ֻ�ܵ������н��ָ���ָ��

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