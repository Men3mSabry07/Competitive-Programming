/*
Problem: Given three sides a, b, c, determine if they form a valid triangle.
If valid, compute its area.

Idea:
1. A triangle is valid if the sum of any two sides is greater than the third side.
   - To simplify, sort the sides and check: a + b > c
2. If valid, compute the area using Heron's formula:
   - s = (a + b + c) / 2
   - area = sqrt(s * (s - a) * (s - b) * (s - c))

Approach:
1. Read the three sides a, b, c.
2. Sort them to easily check the triangle inequality.
3. If valid, compute semi-perimeter s.
4. Apply Heron's formula to calculate area.
5. Print "Valid" + area, or "Invalid" if not a triangle.

Time Complexity: O(1)
Space Complexity: O(1)

Link: https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/S
*/
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

bool isTriangle(int a, int b, int c) {
    vector<int> sides = {a , b , c};
    sort(sides.begin() , sides.end());

    return (sides[0] + sides[1] > sides[2]) ? true : false;
}

long double area(int a, int b, int c) {
    double s = (a + b + c) / 2.0;
    long double area = sqrt(s * (s - a) * (s - b) * (s - c));

    return area;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (isTriangle(a, b, c)) {
        cout << "Valid" << "\n";
        cout << fixed << setprecision(9) << area(a, b, c);
    }
    else {
        cout << "Invalid" << "\n";
    }   
    return 0;
}

