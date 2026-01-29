/*
Problem:
Draw a pyramid of height n using recursion only.
Each row consists of leading spaces followed by stars.
No loops are allowed.

Idea:
We break the problem into two recursive tasks:
1) Draw a single row (spaces + stars).
2) Draw the whole pyramid row by row.

Instead of using loops, recursion is used to:
- Print spaces one by one.
- Print stars one by one.
- Move from one row to the next.

Approach:
1. draw_Row_From_Pyramid(stars, spaces):
   - If both stars and spaces are zero, stop (base case).
   - First print all required spaces recursively.
   - Then print all required stars recursively.

2. draw_Pyramid(rows, stars, spaces):
   - Base case: if rows == 0, stop.
   - Draw the current row using draw_Row_From_Pyramid.
   - Move to the next row:
     - stars increase by 2.
     - spaces decrease by 1.
   - Recursively draw the remaining rows.

Time Complexity:
O(n²), since each row prints O(n) characters.

Space Complexity:
O(n), due to recursive call stack.

This solution demonstrates pure recursion without using any loops.

Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/G
*/

using System;

class Program
{
    // Draws a single row of the pyramid using recursion
    static void draw_Row_From_Pyramid(int nStars, int nSpaces)
    {
        if (nSpaces <= 0 && nStars <= 0)  return; // Base case

        if (nSpaces > 0)
        {
            Console.Write(" ");
            draw_Row_From_Pyramid(nStars, nSpaces - 1);
        }
        else if (nStars > 0)
        {
            Console.Write("*");
            draw_Row_From_Pyramid(nStars - 1, 0);
        }
    }

    // Draws pyramid row by row
    static void draw_Pyramid(int n, int nStars, int nSpaces)
    {
        
        if (n == 0)  return;  // Base case

        draw_Row_From_Pyramid(nStars, nSpaces);
        Console.WriteLine();

        // Prepare values for the next row
        draw_Pyramid(n - 1, nStars + 2, nSpaces - 1);
    }

    static void Main()
    {
        int n = int.Parse(Console.ReadLine());

        int nStars = 1;
        int nSpaces = (n * 2 - 1) / 2; // Half of the last row width

        draw_Pyramid(n, nStars, nSpaces);
    }
}
