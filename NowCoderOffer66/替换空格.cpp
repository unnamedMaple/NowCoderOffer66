/***
��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ�%20����
���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��
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