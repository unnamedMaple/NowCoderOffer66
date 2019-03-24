/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};
*/
class Solution {
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		if (pHead == NULL)
		{
			return pHead;
		}
		if (pHead != NULL && pHead->next == NULL)
		{
			return pHead;
		}


		if (pHead->val == pHead->next->val)
		{

			while (pHead->next != NULL && pHead->val == pHead->next->val)
			{
				pHead = pHead->next;
			}
			return deleteDuplication(pHead->next);
		}
		else
		{


			pHead->next = deleteDuplication(pHead->next);
		}




		return pHead;
	}
};