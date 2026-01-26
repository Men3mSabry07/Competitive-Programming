/*
Problem: Cut Ribbon
Link: https://codeforces.com/problemset/problem/189/A

Approach: Brute Force with Optimization (Two Loops)

Idea:
We need to cut a ribbon of length n into pieces of lengths a, b, or c
such that the total number of pieces is maximized.

Mathematical Formulation:
The problem can be expressed as:
n = i * a + j * b + z * c
where i, j, z are non-negative integers representing the number of pieces
with lengths a, b, and c respectively.

Naive Approach:
A direct solution would try all possible combinations of (i, j, z)
using three nested loops, but this would be too slow.

Optimization:
Instead of using three loops, we fix values of i and j, then compute:
z = (n - i * a - j * b) / c

If the remaining length is non-negative and divisible by c,
we have a valid cutting and can update the maximum number of pieces.

Time Complexity:
O((n/a) * (n/b)) which is feasible since n ≤ 4000

Space Complexity:
O(1)
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int answer = 0; // ex: 7 5 5 2
    for (int i = 0; i <= n / a; i++) { // 1
        for (int j = 0; j <= n / b; j++) { // 1
            int rem = n - (i * a + j * b);
            if (rem >= 0 && rem % c == 0) {
                int z = rem / c;
                answer = max(answer, i + j + z);
            }
        }
    }
    cout << answer; // 2 >> 5 and 2
    return 0;
}
