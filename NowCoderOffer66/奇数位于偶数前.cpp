/***
输入一个整数数组，实现一个函数来调整该数组中数字的顺序，
使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。
***/
#include "Header.h"
class Solution {
public:
	void reOrderArray(vector<int> &array) {
		int n = array.size();
		vector<int>ret(n, 0);
		int oddCount, evenCount = 0;

		for (int i = 0; i<n; i++)
		{

			if (array[i] % 2 == 1)
			{
				ret[oddCount] = array[i];
				oddCount++;
			}

			if (array[n - 1 - i] % 2 == 0)
			{
				ret[n - 1 - evenCount] = array[n - 1 - i];
				evenCount++;
			}
		}

		for (int i = 0; i<n; i++)
		{
			array[i] = ret[i];
		}

		return;
	}
};