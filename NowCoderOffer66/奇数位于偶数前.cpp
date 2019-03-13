/***
����һ���������飬ʵ��һ�����������������������ֵ�˳��
ʹ�����е�����λ�������ǰ�벿�֣����е�ż��λ������ĺ�벿�֣�����֤������������ż����ż��֮������λ�ò��䡣
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