/***
地上有一个m行和n列的方格。一个机器人从坐标0,0的格子开始移动，每一次只能向左，右，上，下四个方向移动一格，
但是不能进入行坐标和列坐标的数位之和大于k的格子。 例如，当k为18时，机器人能够进入方格（35,37），因为3+5+3+7 = 18。
但是，它不能进入方格（35,38），因为3+5+3+8 = 19。请问该机器人能够达到多少个格子？
***/
class Solution {
public:
	int movingCount(int threshold, int rows, int cols)
	{
		bool *visited = new bool[rows*cols]();

		for (int i = 0; i<rows; i++)
		{
			for (int j = 0; j<cols; j++)
			{
				visited[i*cols + j] = false;
			}
		}



		return countGrids(threshold, rows, cols, 0, 0, visited);
	}


	int countGrids(int threashold, int rows, int cols, int curX, int curY, bool * visited)
	{
		if (curX >= rows || curX<0)
		{
			return 0;
		}

		if (curY >= cols || curY<0)
		{
			return 0;
		}

		if (getSum(curX, curY)>threashold || visited[curX*cols + curY] == true)
		{
			return 0;
		}
		visited[curX*cols + curY] = true;
		return 1 + countGrids(threashold, rows, cols, curX - 1, curY, visited) +
			countGrids(threashold, rows, cols, curX + 1, curY, visited) +
			countGrids(threashold, rows, cols, curX, curY - 1, visited) +
			countGrids(threashold, rows, cols, curX, curY + 1, visited);

	}

	int getSum(int a, int b)
	{
		int sumA = 0;
		while (a>0)
		{
			sumA += a % 10;
			a /= 10;
		}
		int sumB = 0;
		while (b>0)
		{
			sumB += b % 10;
			b /= 10;
		}
		return sumA + sumB;

	}
};