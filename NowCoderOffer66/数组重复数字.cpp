class Solution {
public:
	// Parameters:
	//        numbers:     an array of integers
	//        length:      the length of array numbers
	//        duplication: (Output) the duplicated number in the array number
	// Return value:       true if the input is valid, and there are some duplications in the array number
	//                     otherwise false

	bool duplicate(int numbers[], int length, int* duplication) {
		//O(n)¿Õ¼ä
		vector<bool> dups(length, false);
		for (int i = 0; i<length; i++)
		{
			if (dups[numbers[i]] == false)
			{
				dups[numbers[i]] = true;
			}
			else
			{
				*duplication = numbers[i];
				return true;
			}
		}

		return false;

		//offer O(1)¿Õ¼ä

	
		/***
		for (int i = 0; i<length; i++) {

			int index = numbers[i];

			if (index >= length) {

				index -= length;

			}

			if (numbers[index] >= length) {

				*duplication = index;

				return true;

			}

			numbers[index] = numbers[index] + length;

		}

		return false;
		***/
	}
};