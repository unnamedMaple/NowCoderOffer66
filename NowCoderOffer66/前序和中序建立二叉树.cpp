/***
输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。

***/

/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/

#include "Header.h"
class Solution {
public:
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		int len = pre.size();

		if (len == 0)
		{
			return NULL;
		}

		int rootval = pre[0];
		TreeNode* root = new TreeNode(rootval);


		int vinRootIndex = 0;
		for (int i = 0; i<len; i++)
		{
			if (vin[i] == rootval)
			{
				vinRootIndex = i;
				break;
			}
		}

		vector<int>LeftPre;
		vector<int>LeftVin;
		vector<int>RightPre;
		vector<int>RightVin;

		for (int i = 0; i<vinRootIndex; i++)
		{
			LeftPre.push_back(pre[i + 1]);
			LeftVin.push_back(vin[i]);
		}

		for (int i = vinRootIndex + 1; i<len; i++)
		{
			RightPre.push_back(pre[i]);
			RightVin.push_back(vin[i]);
		}

		root->left = reConstructBinaryTree(LeftPre, LeftVin);
		root->right = reConstructBinaryTree(RightPre, RightVin);
		return root;

	}
};