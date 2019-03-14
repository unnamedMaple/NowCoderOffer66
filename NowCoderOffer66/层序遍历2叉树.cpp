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
	vector<int> PrintFromTopToBottom(TreeNode* root) {
		queue<TreeNode*>myqueue;
		vector<int>ret;
		if (root == NULL)
		{
			return ret;
		}
		TreeNode* tmp = NULL;
		myqueue.push(root);
		while (!myqueue.empty())
		{
			tmp = myqueue.front();
			myqueue.pop();
			ret.push_back(tmp->val);
			if (tmp->left != NULL)
			{
				myqueue.push(tmp->left);
			}
			if (tmp->right != NULL)
			{
				myqueue.push(tmp->right);
			}

		}
		return ret;
	}
};