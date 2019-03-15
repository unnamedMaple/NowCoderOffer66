/***
输入一个递增排序的数组和一个数字S，在数组中查找两个数，使得他们的和正好是S，
如果有多对数字的和等于S，输出两个数的乘积最小的。

***/

class Solution {
public:
	vector<int> FindNumbersWithSum(vector<int> array, int sum) {
		int start = 0;
		int end = array.size() - 1;

		vector<int>ret;
		while (start <= end)
		{
			if (array[start] + array[end]>sum)
			{
				end--;
			}
			else if (array[start] + array[end]<sum)
			{
				start++;
			}
			else
			{
				ret.push_back(array[start]);
				ret.push_back(array[end]);
				break;
			}
		}
		return ret;
	}
};