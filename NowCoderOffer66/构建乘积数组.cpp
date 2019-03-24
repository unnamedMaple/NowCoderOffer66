class Solution {
public:
	vector<int> multiply(const vector<int>& A) {
		/***
		int size = A.size();
		if(size<1)
		{
		vector<int> tmp;
		return tmp;
		}

		vector<int>left(size,1);
		vector<int>right(size,1);

		vector<int>ret(size,1);

		int j = size-1;
		for(int i = 1;i<size;i++)
		{
		left[i] = A[i-1]*left[i-1];
		right[j - i] = A[j-i+1]*right[j-i+1];
		}

		for(int i=0;i<size;i++)
		{
		ret[i] = left[i]*right[i];
		}
		return ret;
		***/

		//offer
		int size = A.size();
		if (size<1)
		{
			vector<int> tmp;
			return tmp;
		}
		vector<int>ret(size, 1);
		int tmp = A[0];
		for (int i = 1; i<size; i++)
		{
			ret[i] = tmp;
			tmp *= A[i];
		}

		tmp = A[size - 1];
		for (int i = size - 2; i >= 0; i--)
		{
			ret[i] *= tmp;
			tmp *= A[i];
		}
		return ret;
	}
};