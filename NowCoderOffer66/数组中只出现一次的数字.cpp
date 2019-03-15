/***
һ�����������������������֮�⣬���������ֶ�������ż���Ρ�
��д�����ҳ�������ֻ����һ�ε����֡�
***/

class Solution {
public:
	void FindNumsAppearOnce(vector<int> data, int* num1, int *num2) {
		//����
		int xorR = 0;
		for (int i = 0; i<data.size(); i++)
		{
			xorR ^= data[i];
		}

		int flag = 1;
		while (true)
		{
			if ((xorR & flag) != 0)
			{
				break;
			}
			flag = flag << 1;
		}

		*num1 = 0;
		*num2 = 0;
		for (int i = 0; i<data.size(); i++)
		{
			if ((data[i] & flag) != 0)
			{
				*num1 ^= data[i];
			}
			else
			{
				*num2 ^= data[i];
			}
		}

		/***map ��
		map<int, bool>mymap;
		for (int i = 0; i<data.size(); i++)
		{
			if (mymap.find(data[i]) != mymap.end())
			{
				mymap.erase(data[i]);
			}
			else
			{
				mymap[data[i]] = true;
			}
		}
		bool flag = false;
		map<int, bool>::iterator it;
		for (it = mymap.begin(); it != mymap.end(); it++)
		{
			if (flag == true)
			{
				*num2 = it->first;
			}
			else
			{
				*num1 = it->first;
				flag = true;
			}
		}
		***/
	}
};


