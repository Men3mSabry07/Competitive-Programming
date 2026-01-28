/*
Problem: Check if a large number N is divisible by X.
Since N can be too big, it is stored as a string.

Idea: Compute the remainder digit by digit using modular arithmetic:
remainder = (remainder × 10 + digit) mod X

If the final remainder is 0, print "YES", otherwise print "NO".

Time Complexity: O(n), Space Complexity: O(1)
Link: https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/M
*/

#include <iostream>
using namespace std;

int main()
{
    string S;     long long x;
    cin >> S;     cin >> x;

    int len = S.length();
    long long rem = 0;
    for (int i = 0; i < len; i++) {
        int digit = S[i] - '0';
        rem = (rem * 10 + digit) % x;
    }
 
    string result = (rem == 0) ? "YES" : "NO";
    cout << result;
      
    return 0;
}
