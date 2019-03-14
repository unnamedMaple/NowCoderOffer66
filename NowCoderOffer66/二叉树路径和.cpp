/***
����һ�Ŷ������ĸ��ڵ��һ����������ӡ���������н��ֵ�ĺ�Ϊ��������������·����
·������Ϊ�����ĸ���㿪ʼ����һֱ��Ҷ����������Ľ���γ�һ��·����(ע��: �ڷ���ֵ��list�У����鳤�ȴ�����鿿ǰ)
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

	bool static cmp(vector<int>a, vector<int>b)
	{
		return a.size()>b.size();
	}

	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {

		vector<vector<int> >ret;

		if (root == NULL)
		{
			return ret;
		}

		if (root->left == NULL && root->right == NULL)
		{
			if (root->val == expectNumber)
			{
				vector<int>tmp(1, expectNumber);
				ret.push_back(tmp);
			}

			return ret;


		}

		vector<vector<int> >leftret;
		if (root->left != NULL)
		{
			leftret = FindPath(root->left, expectNumber - root->val);
		}
		vector<vector<int> >rightret;
		if (root->right != NULL)
		{
			rightret = FindPath(root->right, expectNumber - root->val);
		}


		for (int i = 0; i<leftret.size(); i++)
		{
			vector<int>tmp = leftret[i];
			tmp.insert(tmp.begin(), root->val);
			ret.push_back(tmp);
		}

		for (int i = 0; i<rightret.size(); i++)
		{
			vector<int>tmp = rightret[i];
			tmp.insert(tmp.begin(), root->val);
			ret.push_back(tmp);
		}

		sort(ret.begin(), ret.end(), cmp);

		return ret;



	}
};