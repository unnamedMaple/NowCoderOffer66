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
	TreeNode* KthNode(TreeNode* pRoot, int k)
	{
		stack<TreeNode*>mystack;
		TreeNode* tmp = pRoot;
		int count = 0;
		while (!mystack.empty() || tmp != NULL)
		{
			if (tmp == NULL)
			{
				tmp = mystack.top();
				count++;
				if (count == k)
				{
					return tmp;
				}

				mystack.pop();
				tmp = tmp->right;
			}
			else
			{
				mystack.push(tmp);
				tmp = tmp->left;
			}
		}

		return NULL;
	}


};