/***
����һ���������飬�жϸ������ǲ���ĳ�����������ĺ�������Ľ����
����������Yes,�������No���������������������������ֶ�������ͬ��
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