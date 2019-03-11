/***

��һ����ά�����У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������
ÿһ�ж����մ��ϵ��µ�����˳�����������һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
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