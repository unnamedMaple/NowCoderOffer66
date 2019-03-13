/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};*/
class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {
		if (pHead == NULL)
		{
			return NULL;
		}
		ListNode* curPtr = pHead;
		ListNode* ret = curPtr;
		while (pHead->next != NULL)
		{

			curPtr = pHead->next;
			pHead->next = curPtr->next;
			curPtr->next = ret;
			ret = curPtr;
		}

		return ret;
	}
};