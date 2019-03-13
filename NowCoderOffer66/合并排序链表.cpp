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
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		if (pHead1 == NULL)
		{
			return pHead2;
		}

		if (pHead2 == NULL)
		{
			return pHead1;
		}


		ListNode* merHead = NULL;
		ListNode* p1 = pHead1;
		ListNode* p2 = pHead2;
		ListNode* curLast = NULL;

		int val = 0;
		while (p1 != NULL || p2 != NULL)
		{
			if (p1 == NULL)
			{
				curLast->next = p2;
				break;
			}

			if (p2 == NULL)
			{
				curLast->next = p1;
				break;
			}

			if (p1->val<p2->val)
			{
				val = p1->val;

				p1 = p1->next;
			}
			else
			{
				val = p2->val;

				p2 = p2->next;
			}

			ListNode* tmp = new ListNode(val);


			if (merHead == NULL)
			{
				merHead = tmp;
				curLast = tmp;
			}
			else
			{
				curLast->next = tmp;
				curLast = tmp;
			}


		}
		return merHead;
	}
};