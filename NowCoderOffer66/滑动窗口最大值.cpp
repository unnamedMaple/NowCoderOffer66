/***

给定一个数组和滑动窗口的大小，找出所有滑动窗口里数值的最大值。例如，如果输入数组{2,3,4,2,6,2,5,1}及滑动窗口的大小3，那么一共存在6个滑动窗口，
他们的最大值分别为{4,4,6,6,6,5}； 针对数组{2,3,4,2,6,2,5,1}的滑动窗口有以下6个： {[2,3,4],2,6,2,5,1}， {2,[3,4,2],6,2,5,1}， {2,3,[4,2,6],2,5,1}， {2,3,4,[2,6,2],5,1}， {2,3,4,2,[6,2,5],1}， {2,3,4,2,6,[2,5,1]}。
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