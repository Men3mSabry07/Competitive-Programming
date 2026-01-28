/*
Problem:
Print all elements of an array that are located at even indices (0, 2, 4, ...) using recursion.

Idea:
Use recursion to traverse the array from the end to the beginning:
- Base case: when n == 0, stop recursion
- Recursive case: check if the current index (n-1) is even
    - If yes, print arr[n-1]
    - Call the function on the subarray of size n-1

Approach:
1. Read array size n and the array elements.
2. Call recursive function print_Even_Indices(arr, n):
   - Base case: n == 0 → return
   - If (n-1) % 2 == 0 → print arr[n-1]
   - Recur for n-1
3. Print all even-indexed elements in reverse order

Time Complexity: O(n)
Space Complexity: O(n) due to recursion stack

Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F
*/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void print_Even_Indices(vector<int>& arr, int n) {
    if (n == 0) return;
    if ((n - 1) % 2 == 0) 
        cout << arr[n - 1] << " ";
    return print_Even_Indices(arr, n - 1);
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)  cin >> arr[i];

    print_Even_Indices(arr, n);

    return 0;
}

