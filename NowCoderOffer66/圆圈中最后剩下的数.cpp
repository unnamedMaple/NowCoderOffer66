/***
�ñ��Ϊ0��С���ѿ�ʼ������ÿ�κ���m-1���Ǹ�С����Ҫ���г��׸�,Ȼ���������Ʒ�����������ѡ����,���Ҳ��ٻص�Ȧ��,
��������һ��С���ѿ�ʼ,����0...m-1����....������ȥ....ֱ��ʣ�����һ��С����,
���Բ��ñ���,�����õ�ţ������ġ�����̽���ϡ���ذ�(��������Ŷ!!^_^)��������������
,�ĸ�С���ѻ�õ������Ʒ�أ�(ע��С���ѵı���Ǵ�0��n-1)
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

		//��ʽ��
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

		/***ѭ������***/
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