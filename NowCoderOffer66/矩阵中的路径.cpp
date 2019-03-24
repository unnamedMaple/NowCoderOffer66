/***
�����һ�������������ж���һ���������Ƿ����һ������ĳ�ַ��������ַ���·����·�����ԴӾ����е�����һ�����ӿ�ʼ��ÿһ�������ھ������������ң����ϣ������ƶ�һ�����ӡ����һ��·�������˾����е�ĳһ�����ӣ���֮�����ٴν���������ӡ�
���� a b c e s f c s a d e e ������3 X 4 �����а���һ���ַ���"bcced"��·�������Ǿ����в�����"abcb"·������Ϊ�ַ����ĵ�һ���ַ�bռ���˾����еĵ�һ�еڶ�������֮��·�������ٴν���ø��ӡ���
***/
class Solution {
public:
	bool hasPath(char* matrix, int rows, int cols, char* str)
	{
		bool *visited = new bool[rows*cols]();

		for (int i = 0; i<rows; i++)
		{
			for (int j = 0; j<cols; j++)
			{
				visited[i*cols + j] = false;
			}
		}


		for (int i = 0; i<rows; i++)
		{
			for (int j = 0; j<cols; j++)
			{
				if (reHasPath(matrix, rows, cols, str, visited, i, j))
				{
					return true;
				}
			}
		}
		return false;
	}


	bool reHasPath(char* matrix, int rows, int cols, char*str, bool *visited, int curX, int curY)
	{
		if (str[0] == '\0')
		{
			return true;
		}

		if (curX >= rows || curX<0)
		{
			return false;
		}

		if (curY >= cols || curY<0)
		{
			return false;
		}

		if (visited[curX*cols + curY] == 1 || matrix[curX*cols + curY] != str[0])
		{
			return false;
		}
		visited[curX*cols + curY] = true;
		str++;
		bool sign = reHasPath(matrix, rows, cols, str, visited, curX - 1, curY) ||
			reHasPath(matrix, rows, cols, str, visited, curX + 1, curY) ||
			reHasPath(matrix, rows, cols, str, visited, curX, curY - 1) ||
			reHasPath(matrix, rows, cols, str, visited, curX, curY + 1);
		visited[curX*cols + curY] = false;
		return sign;
	}

};