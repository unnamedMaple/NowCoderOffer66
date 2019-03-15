/***

��ֻ����������2��3��5��������������Ugly Number��������6��8���ǳ�������14���ǣ���Ϊ������������7�� 
ϰ�������ǰ�1�����ǵ�һ���������󰴴�С�����˳��ĵ�N��������

***/

class Solution {
public:
	int min(int a, int b, int c)
	{
		if (a<b && a<c)
		{
			return a;
		}
		if (b<c)
		{
			return b;
		}
		return c;
	}
	int GetUglyNumber_Solution(int index) {
		if (index<1)
		{
			return 0;
		}


		vector<int>UNumbers(index, 1);
		int p2 = 0;
		int p3 = 0;
		int p5 = 0;
		int i = 1;
		for (; i<index; i++)
		{
			int tmp = min(UNumbers[p2] * 2, UNumbers[p3] * 3, UNumbers[p5] * 5);
			UNumbers[i] = tmp;

			if (tmp == UNumbers[p2] * 2)
			{
				p2++;
			}
			if (tmp == UNumbers[p3] * 3)
			{
				p3++;
			}
			if (tmp == UNumbers[p5] * 5)
			{
				p5++;
			}
		}
		return UNumbers[index - 1];

	}
};