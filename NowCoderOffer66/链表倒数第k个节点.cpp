
/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};*/

#include "Header.h"
class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		if (k == 0)
		{
			return NULL;
		}
		ListNode* preKPtr = pListHead;
		ListNode* curPtr = pListHead;
		int i = 1;
		while (curPtr != NULL && i<k)
		{
			curPtr = curPtr->next;
			i++;
		}

		if (curPtr == NULL)
		{
			return NULL;
		}

		while (curPtr->next != NULL)
		{
			curPtr = curPtr->next;
			preKPtr = preKPtr->next;

		}

		return preKPtr;
	}
};