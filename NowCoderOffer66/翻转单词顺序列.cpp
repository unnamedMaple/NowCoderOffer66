/***
���磬��student. a am I����
��������ʶ������һ�ԭ���Ѿ��ӵ��ʵ�˳��ת�ˣ���ȷ�ľ���Ӧ���ǡ�I am a student.��
***/

class Solution {
public:
	string ReverseSentence(string str) {

		/***
		���������ټӣ���Ҫ����ռ�
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
		//��ԭ���ϲ�����ת���Σ��Ե�����ת����ԭ����ת
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