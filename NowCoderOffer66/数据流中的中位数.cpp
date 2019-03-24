class Solution {
public:



	priority_queue<int, vector<int>, less<int> > maxHeap;
	priority_queue<int, vector<int>, greater<int> > minHeap;


	void Insert(int num)
	{
		if (minHeap.empty() || num >= minHeap.top())
		{
			minHeap.push(num);
		}
		else
		{
			maxHeap.push(num);
		}

		if (maxHeap.size()>minHeap.size())
		{
			minHeap.push(maxHeap.top());
			maxHeap.pop();

		}
		else if (minHeap.size()>maxHeap.size() + 1)
		{
			maxHeap.push(minHeap.top());
			minHeap.pop();
		}

	}

	double GetMedian()
	{
		if (minHeap.size() == maxHeap.size())
		{
			return (minHeap.top() + maxHeap.top()) / 2.0;
		}
		else
		{
			return minHeap.top();
		}
	}

};