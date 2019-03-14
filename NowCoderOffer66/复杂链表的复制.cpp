/***
����һ����������ÿ���ڵ����нڵ�ֵ���Լ�����ָ�룬һ��ָ����һ���ڵ㣬��һ������ָ��ָ������һ���ڵ㣩�����ؽ��Ϊ���ƺ��������head��
��ע�⣬���������벻Ҫ���ز����еĽڵ����ã�������������ֱ�ӷ��ؿգ�
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

