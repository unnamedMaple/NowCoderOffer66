class Solution {
public:
	int StrToInt(string str) {
		if (str == "")
		{
			return 0;
		}

		int len = str.length();
		int i = 0;
		int ret = 0;
		for (i = 0; i<len; i++)
		{
			if (str[i] != ' ')
			{
				break;
			}
		}
		if (len - i == 1 && (str[i]<'0' || str[i]>'9'))
		{
			return 0;
		}

		bool pos = true;
		if (str[i] == '-')
		{
			pos = false;
			i++;
		}
		else if (str[i] == '+')
		{
			i++;
		}


		for (int j = i; j<len; j++)
		{
			if (str[j] <= '9' && str[j] >= '0')
			{
				ret = ret * 10 + str[j] - '0';
			}
			else
			{
				return 0;
			}

		}
		if (pos == false)
		{
			ret = -ret;

		}
		return ret;

	}
};