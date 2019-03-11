/***

在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，
每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
***/
#include "Header.h"

class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		int m = array.size();

		if (m == 0)
		{
			return false;
		}

		int n = array[0].size();
		int i = m - 1;
		int j = 0;
		while (i >= 0 && j<n)
		{
			if (target == array[i][j])
			{
				return true;
			}
			else if (target>array[i][j])
			{
				j++;
			}
			else
			{
				i--;
			}
		}
		return false;
	}
};