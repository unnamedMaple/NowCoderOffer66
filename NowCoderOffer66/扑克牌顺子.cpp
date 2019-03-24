class Solution {
public:
	bool IsContinuous(vector<int> numbers) {
		/***ÅÅĞò ÕÒ0°æ
		if(numbers.size() == 0)
		{
		return false;
		}
		bool continuous = true;
		sort(numbers.begin(),numbers.end());

		int goast = 0;
		int i = 0;
		for(i=0;i<numbers.size();i++)
		{
		if(numbers[i] == 0)
		{
		goast++;
		}
		else
		{
		break;
		}
		}
		if(i == numbers.size())
		{
		return true;
		}

		if(goast == 0)
		{
		i = 0;
		}

		int pre = numbers[i];
		i++;
		for(;i<numbers.size();i++)
		{
		int res = numbers[i]-pre;
		if(res == 0)
		{
		continuous = false;
		break;
		}
		if(res != 1 )
		{
		goast = goast-(res-1);
		if(goast<0)
		{
		continuous = false;
		break;
		}
		}
		pre = numbers[i];
		}

		return continuous;
		***/
		if (numbers.size() == 0)
		{
			return false;
		}
		int pokers[14] = { 0 };
		int max = -1;
		int min = 15;
		for (int i = 0; i<numbers.size(); i++)
		{
			pokers[numbers[i]]++;

			if (numbers[i] != 0 && pokers[numbers[i]]>1)
			{
				return false;
			}
			if (numbers[i]>max)
			{
				max = numbers[i];
			}
			if (numbers[i] != 0 && numbers[i]<min)
			{
				min = numbers[i];
			}
		}
		if (max - min>4)
		{
			return false;
		}
		return true;

	}
};