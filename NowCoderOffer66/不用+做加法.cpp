int  sumAandB(int a, int b)
{
	int  sum = 0;


	sum = a ^ b;
	while ((a & b) != 0)
	{
		b = (a & b) << 1;

		a = sum;

		sum = sum ^ (b);


	}
	return sum;
}

