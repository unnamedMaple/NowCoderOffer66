/***

һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n���������������һ��n����̨���ܹ��ж�����������

***/
#include "Header.h"
class Solution {
public:
	int jumpFloorII(int number) {
		vector<int>Floor(number, 0);


		for (int i = 0; i<number; i++)
		{
			for (int j = 0; j<i; j++)
			{
				Floor[i] += Floor[j];
			}
			Floor[i] += 1;

		}
		return Floor[number - 1];
	}
};