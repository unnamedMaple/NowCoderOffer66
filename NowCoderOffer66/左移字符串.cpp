class Solution {
public:
	string LeftRotateString(string str, int n) {
		if (str.length() == 0)
		{
			return "";
		}
		int len = n % str.length();
		string ret = "";

		for (int i = len; i<str.length(); i++)
		{
			ret += str[i];
		}
		for (int i = 0; i<len; i++)
		{
			ret += str[i];
		}

		return ret;

	}
};