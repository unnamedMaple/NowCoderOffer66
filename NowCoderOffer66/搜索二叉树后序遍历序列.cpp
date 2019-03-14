/***
输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。
如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同。
***/

class Solution {
public:
	bool VerifySquenceOfBST(vector<int> sequence) {

		int n = sequence.size();
		if (n == 0)
		{
			return false;
		}
		if (n == 1)
		{
			return true;
		}

		vector<int>left;
		vector<int>right;

		int i = 0;
		for (; i<n - 1; i++)
		{
			if (sequence[i]<sequence[n - 1])
			{
				left.push_back(sequence[i]);
			}
			else
			{
				break;
			}
		}

		for (; i<n - 1; i++)
		{
			if (sequence[i]>sequence[n - 1])
			{
				right.push_back(sequence[i]);
			}
			else
			{
				return false;
			}
		}
		if (left.size()>0 && right.size()>0)
		{
			return VerifySquenceOfBST(left) && VerifySquenceOfBST(right);
		}
		if (left.size()>0 && right.size() == 0)
		{
			return VerifySquenceOfBST(left);
		}
		return VerifySquenceOfBST(right);
	}
};