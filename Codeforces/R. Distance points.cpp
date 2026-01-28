/*
Problem: Given two Cartesian points (X1, Y1) and (X2, Y2), compute the distance between them.

Idea: Use the Euclidean distance formula:
distance = sqrt((X2 - X1)^2 + (Y2 - Y1)^2)

Approach:
1. Read the coordinates X1, Y1, X2, Y2.
2. Compute the differences dx = X2 - X1, dy = Y2 - Y1.
3. Compute the distance using sqrt(dx^2 + dy^2).
4. Print the distance with 9 decimal precision.

Time Complexity: O(1)
Space Complexity: O(1)

Link: https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/R
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    long long X1, Y1, X2, Y2;
    cin >> X1 >> Y1 >> X2 >> Y2;

    long double distance = sqrt(pow(Y2 - Y1 , 2) + pow(X2 - X1 , 2));

    cout << fixed << setprecision(9) << distance;

    return 0;
}
