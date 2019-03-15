/***
输入两个链表，找出它们的第一个公共结点。
***/
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
	ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
		stack<ListNode*>p1Stack;
		stack<ListNode*>p2Stack;

		ListNode*tmp = pHead1;
		while (tmp != NULL)
		{
			p1Stack.push(tmp);
			tmp = tmp->next;
		}

		tmp = pHead2;

		while (tmp != NULL)
		{
			p2Stack.push(tmp);
			tmp = tmp->next;
		}

		ListNode* ret = NULL;
		ListNode*tmp2;
		while (!p1Stack.empty() && !p2Stack.empty())
		{
			tmp = p1Stack.top();
			p1Stack.pop();

			tmp2 = p2Stack.top();
			p2Stack.pop();

			if (tmp == tmp2)
			{
				ret = tmp;
			}
			else
			{
				break;
			}
		}
		return ret;

	}
};