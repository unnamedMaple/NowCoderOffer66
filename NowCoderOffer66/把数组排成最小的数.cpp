
/***
����һ�����������飬����������������ƴ�������ų�һ��������ӡ��ƴ�ӳ���������������С��һ����
������������{3��32��321}�����ӡ���������������ųɵ���С����Ϊ321323��
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