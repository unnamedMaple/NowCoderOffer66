/***

在一个字符串(0<=字符串长度<=10000，全部由字母组成)中找到第一个只出现一次的字符,并返回它的位置, 
如果没有则返回 -1（需要区分大小写）.
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