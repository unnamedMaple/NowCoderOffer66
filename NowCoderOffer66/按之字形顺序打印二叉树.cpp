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
	vector<vector<int> > Print(TreeNode* pRoot) {


		queue<TreeNode*> myqueue;
		int count = 0;
		bool left = true;
		vector<vector<int> >ret;
		if (pRoot != NULL)
		{
			myqueue.push(pRoot);
		}

		int layernum = 0;
		while (!myqueue.empty())
		{
			layernum = myqueue.size();
			count = 0;
			vector<int>layerRet;
			while (count<layernum)
			{

				TreeNode* tmp = myqueue.front();
				myqueue.pop();
				if (left == true)
				{
					layerRet.push_back(tmp->val);
				}
				else
				{
					layerRet.insert(layerRet.begin(), tmp->val);
				}
				if (tmp->left != NULL)
				{
					myqueue.push(tmp->left);
				}
				if (tmp->right != NULL)
				{
					myqueue.push(tmp->right);
				}
				count++;
			}
			ret.push_back(layerRet);
			left = !left;
		}
		return ret;


	}

};