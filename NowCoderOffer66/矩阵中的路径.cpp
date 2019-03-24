/***
请设计一个函数，用来判断在一个矩阵中是否存在一条包含某字符串所有字符的路径。路径可以从矩阵中的任意一个格子开始，每一步可以在矩阵中向左，向右，向上，向下移动一个格子。如果一条路径经过了矩阵中的某一个格子，则之后不能再次进入这个格子。
例如 a b c e s f c s a d e e 这样的3 X 4 矩阵中包含一条字符串"bcced"的路径，但是矩阵中不包含"abcb"路径，因为字符串的第一个字符b占据了矩阵中的第一行第二个格子之后，路径不能再次进入该格子。、
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