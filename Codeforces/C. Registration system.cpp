/*
Approach: Frequency Mapping using Hash Map

Idea:
The problem requires handling username registration where duplicate
usernames must be made unique by appending a number.

We use a map (hash table) to keep track of how many times each username
has appeared so far:
- If the username appears for the first time, we print "OK".
- If it already exists, we append the current count to the username
  and print the modified version.
After each operation, the count for that username is incremented.

Time Complexity: O(n log n)
- Each insertion and lookup in the map takes O(log n)
- Total operations are performed n times

Space Complexity: O(n)
- In the worst case, all usernames are unique and stored in the map

Link:
https://codeforces.com/problemset/problem/4/C
*/



#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main()
{
    map<string , int> Regist;

    int t;
    cin >> t;

    while (t--) {
        string S;
        cin >> S;

        Regist[S];

        if (Regist[S] == 0) {
            cout << "OK\n";
            Regist[S]++;
        }
        else {
            cout << S << Regist[S] << "\n";
            Regist[S]++;
        }    
    }

    return 0;
}

