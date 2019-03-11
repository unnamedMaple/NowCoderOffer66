

class Solution {
public:
	int Fibonacci(int n) {
		if (n == 0)
		{
			return 0;
		}

		if (n == 1)
		{
			return 1;
		}

		int pre_n_2 = 0;
		int pre_n_1 = 1;
		int cur = 0;
		for (int i = 2; i <= n; i++)
		{
			cur = pre_n_2 + pre_n_1;

			pre_n_2 = pre_n_1;
			pre_n_1 = cur;


		}
		return cur;

	}
};