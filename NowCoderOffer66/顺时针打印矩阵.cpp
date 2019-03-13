/***

输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字，
例如，如果输入如下4 X 4矩阵： 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 则依次打印出数字1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.
***/
class Solution {
public:
	vector<int> printMatrix(vector<vector<int> > matrix) {
		vector<int>ret;
		int m = matrix.size();
		int n = matrix[0].size();

		int circle = 0;
		if (m<n)
		{
			circle = (m + 1) / 2;

		}
		else
		{
			circle = (n + 1) / 2;
		}

		int top = 0;
		int bottom = m - 1;
		int left = 0;
		int right = n - 1;

		int flag = 1;
		bool done = false;
		int row, col;
		for (int i = 0; i<circle; i++)
		{
			top = 0 + i;
			bottom = m - 1 - i;
			left = 0 + i;
			right = n - 1 - i;

			row = top;
			col = left;
			done = false;
			flag = 1;
			while (!done)
			{
				ret.push_back(matrix[row][col]);

				switch (flag)
				{
				case 1:
					col++;
					if (col>right)
					{
						flag = 2;
						row++;
						col--;
						if (row>bottom)
						{
							done = true;
						}
					}
					break;
				case 2:
					row++;
					if (row>bottom)
					{
						flag = 3;
						row--;
						col--;
						if (col<left)
						{
							done = true;
						}
					}
					break;
				case 3:
					col--;
					if (col<left)
					{
						flag = 4;
						col++;
						row--;
						if (row == top)
						{
							done = true;
						}
					}
					break;
				case 4:
					row--;
					if (row == top)
					{
						done = true;
					}
					break;

				}

			}

		}
		return ret;
	}
};