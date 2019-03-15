/***

��һ���ַ���(0<=�ַ�������<=10000��ȫ������ĸ���)���ҵ���һ��ֻ����һ�ε��ַ�,����������λ��, 
���û���򷵻� -1����Ҫ���ִ�Сд��.
***/
class Solution {
public:
	int FirstNotRepeatingChar(string str) {
		if (str == "")
		{
			return -1;
		}
		vector<int>lower(26, 0);
		vector<int>upper(26, 0);
		queue<int>myqueue;
		char tmp;
		for (int i = 0; i<str.length(); i++)
		{
			tmp = str[i];
			if (tmp <= 'Z' && tmp >= 'A')
			{
				if (upper[tmp - 'A'] == 0)
				{
					myqueue.push(i);

				}
				upper[tmp - 'A']++;
			}
			else
			{
				if (lower[tmp - 'a'] == 0)
				{
					myqueue.push(i);

				}
				lower[tmp - 'a']++;
			}


		}


		int index;
		while (!myqueue.empty())
		{
			index = myqueue.front();
			myqueue.pop();
			tmp = str[index];

			if (tmp <= 'Z' && tmp >= 'A')
			{
				if (upper[tmp - 'A'] == 1)
				{
					return index;
				}
			}
			else
			{
				if (lower[tmp - 'a'] == 1)
				{
					return index;
				}
			}
		}
		return -1;

	}
};