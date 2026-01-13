/*
Approach: Parity Analysis
Idea:
Analyze the parity distribution of the input numbers by counting
even and odd values to identify the dominant parity.
The element that does not follow this dominant pattern is then located
and its position is returned using 1-based indexing.

Time Complexity: O(n)
Space Complexity: O(1)

Link : https://codeforces.com/problemset/problem/25/A
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


string getCommonEvenOdd(vector<int>& arr, short n) {
    short nEven = 0, nOdd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            nEven++;
        else if (arr[i] % 2 != 0)
            nOdd++;
    }

    if (nOdd > nEven)  return "Odd";
        else           return "Even";
}

int diffNumber(vector<int>& arr , short n) {
    int idxPos = 0;
    string common = getCommonEvenOdd(arr, n);
    for (int i = 0; i < n; i++) { // 2 4 7 8 10
        if (arr[i] % 2 == 0 && common == "Odd")
            idxPos = i;
        else if (arr[i] % 2 != 0 && common == "Even")
            idxPos = i;
    }

    return idxPos + 1;
}

int main()
{
    short n;
    cin >> n;

    vector<int> arr(n,0);

    for (int i = 0; i < n; i++) cin >> arr[i];

    short idxPos = diffNumber(arr,n);

    cout << idxPos;

    return 0;
}

