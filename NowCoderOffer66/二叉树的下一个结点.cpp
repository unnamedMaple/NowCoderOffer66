/*
struct TreeLinkNode {
int val;
struct TreeLinkNode *left;
struct TreeLinkNode *right;
struct TreeLinkNode *next;
TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {

}
};
*/
class Solution {
public:
	TreeLinkNode* GetNext(TreeLinkNode* pNode)
	{
		if (pNode->right != NULL)
		{
			TreeLinkNode* tmp = pNode->right;
			while (tmp->left != NULL)
			{
				tmp = tmp->left;
			}
			return tmp;
		}
		else
		{
			if (pNode->next != NULL)
			{

				TreeLinkNode* parent = pNode->next;
				TreeLinkNode* child = pNode;
				while (parent != NULL)
				{
					if (parent->left == child)
					{
						return parent;
					}
					child = parent;
					parent = parent->next;
				}

				return NULL;
			}
			else
			{
				return NULL;
			}

		}



	}
};