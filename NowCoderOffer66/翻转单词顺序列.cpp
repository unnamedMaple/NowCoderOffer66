/***
例如，“student. a am I”。
后来才意识到，这家伙原来把句子单词的顺序翻转了，正确的句子应该是“I am a student.”
***/

class Solution {
public:
	string ReverseSentence(string str) {

		/***
		遍历单词再加，需要额外空间
		string ret = "";

		string tmp = "";
		bool opera = false;
		for(int i=0;i<str.length();i++)
		{
		if(str[i] == ' ')
		{
		if(ret == "")
		{
		ret = tmp;
		}
		else
		{
		ret = tmp+" "+ret;
		}

		tmp = "";
		}
		else
		{
		opera = true;
		tmp+=str[i];
		}
		}

		if(opera == false)
		{
		return str;
		}

		if(ret == "")
		{
		ret = tmp;
		}
		else
		{
		ret = tmp+" "+ret;
		}

		return ret;
		***/
		//在原串上操作逆转两次，对单词逆转，对原创逆转
		reverse(str.begin(), str.end());
		int pre = 0;
		for (int i = 0; i<str.length(); i++)
		{
			if (str[i] == ' ')
			{
				reverse(str.begin() + pre, str.begin() + i);
				pre = i + 1;
			}
		}
		reverse(str.begin() + pre, str.end());
		return str;
	}
};