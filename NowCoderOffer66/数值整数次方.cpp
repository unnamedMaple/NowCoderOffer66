/***
����һ��double���͵ĸ�����base��int���͵�����exponent����base��exponent�η�

***/


class Solution {
public:
	double Power(double base, int exponent) {
		double ret = 1;

		if (exponent<0)
		{
			base = 1 / base;
			exponent = -exponent;
		}

		for (int i = 0; i<exponent; i++)
		{
			ret *= base;
		}
		return ret;
	}
};