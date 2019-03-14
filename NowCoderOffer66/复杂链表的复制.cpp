/***
输入一个复杂链表（每个节点中有节点值，以及两个指针，一个指向下一个节点，另一个特殊指针指向任意一个节点），返回结果为复制后复杂链表的head。
（注意，输出结果中请不要返回参数中的节点引用，否则判题程序会直接返回空）
***/
/*
struct RandomListNode {
int label;
struct RandomListNode *next, *random;
RandomListNode(int x) :
label(x), next(NULL), random(NULL) {
}
};
*/
class Solution {
public:
	RandomListNode* Clone(RandomListNode* pHead)
	{
		if (pHead == NULL)
		{
			return NULL;
		}

		RandomListNode* tmp = pHead;


		while (tmp != NULL)
		{
			RandomListNode* newNode = new RandomListNode(tmp->label);
			newNode->next = tmp->next;
			tmp->next = newNode;
			tmp = newNode->next;
		}

		tmp = pHead;
		RandomListNode* newPtr = tmp->next;

		while (tmp != NULL)
		{
			newPtr = tmp->next;
			if (tmp->random != NULL)
			{
				newPtr->random = tmp->random->next;
			}

			tmp = newPtr->next;

		}
		tmp = pHead;
		newPtr = tmp->next;
		RandomListNode* cloneHead = tmp->next;

		while (tmp != NULL)
		{
			tmp->next = newPtr->next;

			if (tmp->next == NULL)
			{
				newPtr->next = NULL;
			}
			else
			{
				newPtr->next = newPtr->next->next;
			}
			tmp = tmp->next;
			newPtr = newPtr->next;

		}
		return cloneHead;
	}
};

