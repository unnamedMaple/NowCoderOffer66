/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/

#include "Header.h"
class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		vector<int>ret;
		if (head == NULL)
		{
			return ret;
		}
		ListNode* tmp = head;
		while (tmp != NULL)
		{
			ret.insert(ret.begin(), tmp->val);
			tmp = tmp->next;
		}

		return ret;

	}
};