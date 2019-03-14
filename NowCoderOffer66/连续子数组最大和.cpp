/***
给一个数组，
返回它的最大连续子序列的和，
***/

class Solution {
public:
	int FindGreatestSumOfSubArray(vector<int> array) {
		int minus = 0;
		int max = INT_MIN;
		for (int i = 0; i<array.size(); i++)
		{
			minus += array[i];
			if (minus > max)
			{
				max = minus;
			}

			if (minus < 0)
			{
				minus = 0;
			}
		}
		return max;
	}
};