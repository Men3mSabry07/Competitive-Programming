/*
Approach: Frequency Array
Idea:
Use a boolean frequency array to mark whether a number appeared before.
If it appears again, it is counted as a duplicate.
This approach works for any number of inputs, not only 4.

Time Complexity: O(n)
Space Complexity: O(M), where M is the maximum possible value of the numbers.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> freq (INT_MAX,false);

int main()
{
	int arr[4];

	int count = 0;
	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
		if (freq[arr[i]])
			count++;
		else
			freq[arr[i]] = true;
	}

	cout << count;

	// for (int Num : arr) cout << Num << " ";
  
	return 0;
}

