/***
��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
��������һ������Ϊ9������{1,2,3,2,2,2,5,4,2}��
��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��
***/
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		if (numbers.size()<1)
		{
			return 0;
		}
		int num;
		int count = 0;

		for (int i = 0; i<numbers.size(); i++)
		{
			if (count == 0)
			{
				num = numbers[i];
				count = 1;
			}
			else
			{
				if (numbers[i] != num)
				{
					count--;
				}
				else
				{
					count++;
				}
			}

		}
		count = 0;
		for (int j = 0; j<numbers.size(); j++)
		{
			if (numbers[j] == num)
			{
				count++;
			}
		}
		if (count * 2>numbers.size())
		{
			return num;
		}
		return 0;


	}
};
