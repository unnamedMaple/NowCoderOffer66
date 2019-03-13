/***
定义栈的数据结构，请在该类型中实现一个能够得到栈中所含最小元素的min函数（时间复杂度应为O（1））。
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
