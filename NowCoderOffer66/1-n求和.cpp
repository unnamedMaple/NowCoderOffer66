
//求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
class Solution {
public:
	int Sum_Solution(int n) {
		//&&短路特性代替if,递归代替循环
		int sum = n;
		bool a = (sum>0) && ((sum = sum + Sum_Solution(n - 1))>0);
		return sum;

	}
};