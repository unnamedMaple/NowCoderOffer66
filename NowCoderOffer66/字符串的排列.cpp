
/***
输入一个字符串,按字典序打印出该字符串中字符的所有排列。
例如输入字符串abc,则打印出由字符a,b,c所能排列出来的所有字符串abc,acb,bac,bca,cab和cba。
***/
class Solution {
public:
	vector<string> Permutation(string str) {
		vector<string>ret;
		if (str == "")
		{
			return ret;
		}

		if (str.length() == 1)
		{
			ret.push_back(str);
			return ret;
		}

		map<char, int>mymap;
		char first;
		for (int i = 0; i<str.length(); i++)
		{
			first = str[i];
			if (mymap.find(first) != mymap.end())
			{
				continue;
			}
			else
			{
				mymap[first] = 1;
				vector<string>subRet = Permutation(str.substr(0, i) + str.substr(i + 1));
				for (int j = 0; j<subRet.size(); j++)
				{
					string newstr = first + subRet[j];
					ret.push_back(newstr);
				}


			}
		}
		sort(ret.begin(), ret.end());
		return ret;


	}
};