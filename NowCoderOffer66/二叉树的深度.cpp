/*
struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};*/
//����һ�ö����������������ȡ�
//�Ӹ���㵽Ҷ������ξ����Ľ�㣨������Ҷ��㣩�γ�����һ��·�����·���ĳ���Ϊ������ȡ�
class Solution {
public:

	int TreeDepth(TreeNode* pRoot)
	{
		if (pRoot == NULL)
		{
			return 0;
		}

		int depth = 1;
		int ret = 1;
		stack<TreeNode*> treeS;
		stack<int>depthS;
		TreeNode* tmp = pRoot;
		while (tmp != NULL || !treeS.empty())
		{
			if (tmp == NULL)
			{
				tmp = treeS.top();
				treeS.pop();
				depth = depthS.top();
				depthS.pop();
				if (depth>ret)
				{
					ret = depth;
				}
				tmp = tmp->right;
				depth++;

			}
			else
			{
				treeS.push(tmp);
				depthS.push(depth);

				tmp = tmp->left;
				depth++;
			}
		}
		return ret;

	}
};


//�����������������һ��
int TreeDepth(TreeNode* pRoot)
{
	queue<TreeNode*> q;
	if (!pRoot) return 0;
	q.push(pRoot);
	int level = 0;
	while (!q.empty()){
		int len = q.size();
		level++;
		while (len--){
			TreeNode* tem = q.front();
			q.pop();
			if (tem->left) q.push(tem->left);
			if (tem->right) q.push(tem->right);
		}
	}
	return level;
}

//�ݹ�

int TreeDepth(TreeNode* pRoot){
	if (!pRoot) return 0;
	return max(1 + TreeDepth(pRoot->left), 1 + TreeDepth(pRoot->right));
}