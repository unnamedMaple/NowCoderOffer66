/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};

//��һ�����������а����������ҳ�������Ļ�����ڽ�㣬�������null��
class Solution {
public:
	ListNode* EntryNodeOfLoop(ListNode* pHead)
	{
		//map��
		/***
		map<ListNode*,bool>mymap;

		ListNode*tmp = pHead;
		while(tmp!=NULL)
		{
		if(mymap.find(tmp)!=mymap.end())
		{
		return tmp;
		}
		else
		{
		mymap[tmp] = true;
		}
		tmp =  tmp->next;
		}
		return NULL;
		***/
		//˫ָ�뷨
		ListNode* fastP = pHead;
		ListNode* slowP = pHead;
		while (fastP != NULL && fastP->next != NULL)
		{
			fastP = fastP->next->next;
			slowP = slowP->next;

			if (fastP == slowP)
			{
				fastP = pHead;
				while (fastP != slowP)
				{
					slowP = slowP->next;
					fastP = fastP->next;
				}
				return fastP;

			}
		}
		return NULL;
	}
};