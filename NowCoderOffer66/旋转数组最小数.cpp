/***
��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת�� 
����һ���Ǽ�����������һ����ת�������ת�������СԪ�ء� ��������{3,4,5,1,2}Ϊ{1,2,3,4,5}��һ����ת��
���������СֵΪ1�� NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��
***/

#include "Header.h"
class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		int len = rotateArray.size();

		if (len == 0)
		{
			return 0;
		}
		int left = 0;
		int right = len - 1;
		int mid = 0;
		while (left <= right)
		{
			mid = left + (right - left) / 2;
			if (rotateArray[mid]<rotateArray[right])
			{
				right = mid;


			}
			else if (rotateArray[mid]>rotateArray[right])
			{
				left = mid + 1;
			}
			else
			{
				right--;
			}

			if (left >= right)
			{
				break;
			}
		}
		return rotateArray[left];

	}
};