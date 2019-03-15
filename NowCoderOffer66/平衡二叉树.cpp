
//����һ�ö��������жϸö������Ƿ���ƽ���������
class Solution {
public:
	bool IsBalanced_Solution(TreeNode* pRoot) {
		int dep = getDepth(pRoot);
		if (dep != -1)
		{
			return true;
		}
		return false;

	}

	int getDepth(TreeNode* pRoot)
	{
		if (pRoot == NULL)
		{
			return 0;
		}

		int left = getDepth(pRoot->left);
		if (left == -1)
		{
			return -1;
		}

		int right = getDepth(pRoot->right);
		if (right == -1)
		{
			return -1;
		}

		if (abs(right - left)>1)
		{
			return -1;
		}

		return 1 + max(right, left);

	}
};