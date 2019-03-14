/***

输入n个整数，找出其中最小的K个数。
例如输入4,5,1,6,2,7,3,8这8个数字，则最小的4个数字是1,2,3,4,。
***/

class Solution {
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
		vector<int>ret;
		if (k>input.size())
		{
			return ret;
		}
		priority_queue<int, vector<int>, greater<int>>q;
		for (int i = 0; i<input.size(); i++)
		{
			q.push(input[i]);

		}

		for (int j = 0; j<k; j++)
		{
			int tmp = q.top();
			q.pop();
			ret.push_back(tmp);

		}
		return ret;

	}
};