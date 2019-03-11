

#include "Header.h"
class Solution
{
public:
	void push(int node) {
		stack1.push(node);
	}

	int pop() {
		if (stack2.empty())
		{
			int tmp = 0;
			while (!stack1.empty())
			{
				tmp = stack1.top();
				stack2.push(tmp);
				stack1.pop();

			}
		}
		int ret = stack2.top();
		stack2.pop();
		return ret;

	}

private:
	stack<int> stack1;
	stack<int> stack2;
};