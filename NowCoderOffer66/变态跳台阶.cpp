/***

一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。

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