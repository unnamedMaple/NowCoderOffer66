/***
����һ����������������һ������S���������в�����������ʹ�����ǵĺ�������S��
����ж�����ֵĺ͵���S������������ĳ˻���С�ġ�

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