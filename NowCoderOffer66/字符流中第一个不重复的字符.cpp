class Solution
{
public:
	//Insert one char from stringstream

	void Insert(char ch)
	{
		if (hashT[ch - '\0'] == 0)
		{
			myqueue.push(ch);

		}
		hashT[ch - '\0']++;

	}
	//return the first appearence once char in current stringstream
	char FirstAppearingOnce()
	{
		while (!myqueue.empty())
		{
			if (hashT[myqueue.front() - '\0'] == 1)
			{
				return myqueue.front();
			}
			else
			{
				myqueue.pop();
			}
		}
		return '#';
	}
private:
	int hashT[256] = { 0 };
	queue<char> myqueue;
};