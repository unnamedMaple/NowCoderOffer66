/***

������к�ΪS�������������С������ڰ��մ�С�����˳�����м䰴�տ�ʼ���ִ�С�����˳��
***/

class Solution {
public:
	vector<vector<int> > FindContinuousSequence(int sum) {
		//˫ָ�뷨
		/***
		vector<vector<int> > ret;
		int pHigh = 2;
		int pLow = 1;
		int cur;
		while(pLow<pHigh)
		{
		cur = (pHigh + pLow) * (pHigh - pLow +1) / 2;
		if(cur<sum)
		{
		pHigh++;
		}
		else if(cur == sum)
		{
		vector<int>tmpret;
		for(int i = pLow;i<=pHigh;i++)
		{
		tmpret.push_back(i);
		}
		ret.push_back(tmpret);
		pLow++;
		}
		else
		{
		pLow++;
		}

		}
		return ret;
		***/


		//��ѧ��
		vector<vector<int>> arr;
		if (sum < 2) return arr;

		int n = (int)sqrt(2 * sum);
		for (int i = n; i >= 2; --i){
			if ((i & 1 && !(sum%i)) || (sum%i) * 2 == i){
				vector<int> list;
				for (int k = 0, startData = sum / i - (i - 1) / 2; k < i; ++k, ++startData){
					list.push_back(startData);
				}
				arr.push_back(list);
			}
		}
		return arr;
	}
};