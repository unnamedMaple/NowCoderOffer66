/***
让编号为0的小朋友开始报数。每次喊到m-1的那个小朋友要出列唱首歌,然后可以在礼品箱中任意的挑选礼物,并且不再回到圈中,
从他的下一个小朋友开始,继续0...m-1报数....这样下去....直到剩下最后一个小朋友,
可以不用表演,并且拿到牛客名贵的“名侦探柯南”典藏版(名额有限哦!!^_^)。请你试着想下
,哪个小朋友会得到这份礼品呢？(注：小朋友的编号是从0到n-1)
***/

class Solution {
public:
	struct Node{
		int index;
		Node* next;
	};
	int LastRemaining_Solution(int n, int m)
	{
		if (n == 0)
		{
			return -1;
		}

		//公式法
		/***
		if(n < 1 || m < 1){
		return -1;
		}
		int last = 0;
		for(int i = 2; i <= n ; i++){
		last = (last+m)%i;
		}
		return last;
		***/

		/***循环链表法***/
		if (n == 1)
		{
			return 0;
		}

		Node* head = new Node();
		head->index = 0;
		Node* pre = head;
		for (int i = 1; i<n; i++)
		{
			Node* tmp = new Node();
			tmp->index = i;
			tmp->next = NULL;
			pre->next = tmp;
			pre = tmp;

		}
		pre->next = head;


		while (true)
		{
			Node* tmp = head;
			pre = head;
			for (int i = 0; i<m - 1; i++)
			{
				pre = tmp;
				tmp = tmp->next;

			}

			pre->next = tmp->next;
			head = tmp->next;

			delete(tmp);

			if (head == head->next)
			{
				return head->index;
			}
		}
		return 0;

	}
};