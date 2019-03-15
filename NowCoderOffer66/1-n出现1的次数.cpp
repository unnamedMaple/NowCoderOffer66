
//出现k的次数，k可以为0-9
class Solution {
public:
	int NumberOf1Between1AndN_Solution(int n)
	{
		int sum = 0;
		int last = n / 10;
		int k = 1;

		if (k <= n % 10){
			last += 1;
		}
		sum += last;

		int tmp = 10;
		while (n - tmp >= 0)
		{
			sum += (n - tmp) / (tmp * 10) * tmp;

			if (k == n / tmp % 10)
			{
				sum += n % tmp + 1;
			}
			else if (n / tmp % 10 == 0 || (k != 0 && k < n / tmp % 10))
			{
				sum += tmp;
			}


			tmp *= 10;
		}
		return sum;
	}
};