
//统计一个数字在排序数组中出现的次数。
class Solution {
public:
	int GetNumberOfK(vector<int> data, int k) {
		int ret = 0;
		int left = 0;
		int right = data.size() - 1;
		int mid = 0;
		while (left <= right)
		{
			mid = left + (right - left) / 2;
			if (data[mid]>k)
			{
				right = mid - 1;
			}
			else if (data[mid]<k)
			{
				left = mid + 1;
			}
			else
			{
				ret = 1;
				for (int i = mid - 1; i >= left; i--)
				{
					if (data[i] == k)
					{
						ret++;
					}
					else {
						break;
					}
				}

				for (int i = mid + 1; i <= right; i++)
				{
					if (data[i] == k)
					{
						ret++;
					}
					else {
						break;
					}
				}
				break;
			}
		}
		return ret;

	}
};