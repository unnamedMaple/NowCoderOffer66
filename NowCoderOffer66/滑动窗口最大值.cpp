/***

����һ������ͻ������ڵĴ�С���ҳ����л�����������ֵ�����ֵ�����磬�����������{2,3,4,2,6,2,5,1}���������ڵĴ�С3����ôһ������6���������ڣ�
���ǵ����ֵ�ֱ�Ϊ{4,4,6,6,6,5}�� �������{2,3,4,2,6,2,5,1}�Ļ�������������6���� {[2,3,4],2,6,2,5,1}�� {2,[3,4,2],6,2,5,1}�� {2,3,[4,2,6],2,5,1}�� {2,3,4,[2,6,2],5,1}�� {2,3,4,2,[6,2,5],1}�� {2,3,4,2,6,[2,5,1]}��
***/
class Solution {
public:
	vector<int> maxInWindows(const vector<int>& num, unsigned int size)
	{

		int len = num.size();


		vector<int>ret;
		list<int>myqueue;
		if (len<1)
		{
			return ret;
		}
		myqueue.push_back(0);
		if (size == 1)
		{
			ret.push_back(num[0]);
		}
		for (int i = 1; i<len; i++)
		{
			while (!myqueue.empty() && num[i]>num[myqueue.back()])
			{
				myqueue.pop_back();
			}

			myqueue.push_back(i);

			if (i - myqueue.front() == size)
			{
				myqueue.pop_front();
			}

			if (i >= size - 1)
			{
				ret.push_back(num[myqueue.front()]);
			}
		}
		return ret;




	}
};