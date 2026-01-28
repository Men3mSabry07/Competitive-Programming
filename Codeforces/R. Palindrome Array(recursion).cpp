/*
Problem:
Check if a given array of integers is a palindrome using recursion.
A palindrome array reads the same forward and backward.

Idea:
Use two pointers, start and end, and compare the elements:
- If arr[start] != arr[end] → Not a palindrome
- If start >= end → All elements matched, it's a palindrome
- Otherwise, recursively check the subarray inside (start+1 to end-1)

Approach:
1. Read the array of size n.
2. Initialize start = 0 and end = n-1.
3. Call recursive function isPalindrome(arr, start, end):
   - Base case 1: start >= end → return true
   - Base case 2: arr[start] != arr[end] → return false
   - Recursive case: check inside the subarray
4. Print "YES" if palindrome, otherwise "NO"

Time Complexity: O(n)
Space Complexity: O(n) due to recursion stack

Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R
*/
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isPalindrome(vector<int> & arr , int start , int end) {
    if (start >= end) return true;
    if (arr[start] != arr[end]) return false;
    return isPalindrome(arr, start + 1, end - 1);
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n,0);

    for (int i = 0; i < n; i++)  cin >> arr[i];

    int start = 0, end = n - 1;

    if (isPalindrome(arr, start, end))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

