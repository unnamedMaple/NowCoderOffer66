
/***
输入一个正整数数组，把数组里所有数字拼接起来排成一个数，打印能拼接出的所有数字中最小的一个。
例如输入数组{3，32，321}，则打印出这三个数字能排成的最小数字为321323。
***/
class Solution {
public:
	static bool cmp(string s1, string s2)
	{
		return s1 + s2<s2 + s1;
	}

	string PrintMinNumber(vector<int> numbers) {
		vector<string>numStr;
		for (int i = 0; i<numbers.size(); i++)
		{
			numStr.push_back(to_string(numbers[i]));
		}

		sort(numStr.begin(), numStr.end(), cmp);
		string ret;
		for (int j = 0; j<numStr.size(); j++)
		{
			ret += numStr[j];
		}
		return ret;
	}
};