/*
struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};
���������Ķ�����������任ΪԴ�������ľ���
�������ľ����壺Դ������
8
/  \
6   10
/ \  / \
5  7 9 11
���������
8
/  \
10   6
/ \  / \
11 9 7  5


*/
class Solution {
public:
	void Mirror(TreeNode *pRoot) {
		if (pRoot == NULL)
		{
			return;
		}
		TreeNode* tmp = pRoot->left;
		pRoot->left = pRoot->right;
		pRoot->right = tmp;

		Mirror(pRoot->left);
		Mirror(pRoot->right);
		return;
	}
};