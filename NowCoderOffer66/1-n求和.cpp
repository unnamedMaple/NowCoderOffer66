
//��1+2+3+...+n��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A?B:C����
class Solution {
public:
	int Sum_Solution(int n) {
		//&&��·���Դ���if,�ݹ����ѭ��
		int sum = n;
		bool a = (sum>0) && ((sum = sum + Sum_Solution(n - 1))>0);
		return sum;

	}
};