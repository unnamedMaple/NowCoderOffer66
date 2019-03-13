/***
����ջ�����ݽṹ�����ڸ�������ʵ��һ���ܹ��õ�ջ��������СԪ�ص�min������ʱ�临�Ӷ�ӦΪO��1������
***/

class Solution {
public:
	stack<int>myStack;
	stack<int>minStack;
	void push(int value) {
		myStack.push(value);
		if (minStack.empty())
		{
			minStack.push(value);
		}
		else{
			if (minStack.top()>value)
			{
				minStack.push(value);
			}
			else{
				minStack.push(minStack.top());
			}
		}
	}
	void pop() {
		if (!myStack.empty())
		{
			myStack.pop();
			minStack.pop();
		}
	}
	int top() {
		if (!myStack.empty())
		{
			return myStack.top();
		}
		return -1;
	}
	int min() {
		if (!minStack.empty())
		{
			return minStack.top();
		}
		return -1;
	}
};
