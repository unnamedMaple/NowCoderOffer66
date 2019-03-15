/***
�������е��������֣����ǰ��һ�����ִ��ں�������֣����������������һ������ԡ�
����һ������,�����������е�����Ե�����P��
����P��1000000007ȡģ�Ľ������� �����P%1000000007
***/

class Solution {
public:
	int M = 1000000007;
	int InversePairs(vector<int> data) {
		if (data.size() <= 1)
		{
			return 0;
		}
		vector<int>copy(data.size(), 0);
		int ret = subInversePairs(data, copy, 0, data.size() - 1);
		return ret;
	}
	int subInversePairs(vector<int> &data, vector<int>&copy, int start, int end){
		if (end == start)
		{
			return 0;
		}

		int mid = start + (end - start) / 2;

		//��Ҫ�Ӻ���ǰ�鲢
		int i = mid;
		int j = end;

		int num = 0;
		int leftNum = subInversePairs(data, copy, start, mid) % M;
		int rightNum = subInversePairs(data, copy, mid + 1, end) % M;
		int indexCopy = end;
		while (i >= start && j >= mid + 1)
		{
			if (data[i]>data[j])
			{
				num = (num + j - mid) % M;

				copy[indexCopy] = data[i];
				i--;
				indexCopy--;
			}
			else
			{
				copy[indexCopy] = data[j];
				indexCopy--;
				j--;
			}

		}

		for (; i >= start; i--)
		{
			copy[indexCopy] = data[i];
			indexCopy--;

		}

		for (; j >= mid + 1; j--)
		{
			copy[indexCopy] = data[j];
			indexCopy--;
		}
		int index = start;
		for (; index <= end; index++)
		{
			data[index] = copy[index];
		}
		int ret = (num + leftNum + rightNum) % M;
		return ret;
	}

};