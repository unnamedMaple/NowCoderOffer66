/***
给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方

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