/***
������һ��m�к�n�еķ���һ�������˴�����0,0�ĸ��ӿ�ʼ�ƶ���ÿһ��ֻ�������ң��ϣ����ĸ������ƶ�һ��
���ǲ��ܽ�������������������λ֮�ʹ���k�ĸ��ӡ� ���磬��kΪ18ʱ���������ܹ����뷽��35,37������Ϊ3+5+3+7 = 18��
���ǣ������ܽ��뷽��35,38������Ϊ3+5+3+8 = 19�����ʸû������ܹ��ﵽ���ٸ����ӣ�
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