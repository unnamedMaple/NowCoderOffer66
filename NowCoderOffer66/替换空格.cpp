/***
请实现一个函数，将一个字符串中的每个空格替换成“%20”。
例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
***/
#include "Header.h
class Solution {
public:
	void replaceSpace(char *str, int length) {
		int spacenum = 0;

		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == ' ')
			{
				spacenum++;
			}

		}

		for (int j = length - 1; j >= 0; j--)
		{
			if (str[j] != ' ')
			{
				str[j + 2 * spacenum] = str[j];
			}
			else
			{
				str[j + 2 * spacenum - 2] = '%';
				str[j + 2 * spacenum - 1] = '2';
				str[j + 2 * spacenum] = '0';
				spacenum--;
			}
		}

	}
};