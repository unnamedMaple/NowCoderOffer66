/***

把只包含质因子2、3和5的数称作丑数（Ugly Number）。例如6、8都是丑数，但14不是，因为它包含质因子7。 
习惯上我们把1当做是第一个丑数。求按从小到大的顺序的第N个丑数。

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