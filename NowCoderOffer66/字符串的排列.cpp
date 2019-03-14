
/***
����һ���ַ���,���ֵ����ӡ�����ַ������ַ����������С�
���������ַ���abc,���ӡ�����ַ�a,b,c�������г����������ַ���abc,acb,bac,bca,cab��cba��
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