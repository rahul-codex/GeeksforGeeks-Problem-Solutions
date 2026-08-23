/*
====================================================================
Problem: Print Hollow Rectangle
Platform: GeeksforGeeks
Difficulty: Basic

Problem Statement:
Given two integers n and m, print a hollow rectangle pattern
consisting of n rows and m columns.

Only the boundary of the rectangle should contain '*' characters.
The inside of the rectangle should contain spaces.

Input:
- Two integers n and m.
- n represents the number of rows.
- m represents the number of columns.

Output:
- Print a hollow rectangle with n rows and m columns.

Example 1:
Input:
n = 3, m = 5

Output:
*****
*   *
*****

Example 2:
Input:
n = 4, m = 3

Output:
***
* *
* *
***

====================================================================
Approach:

Use nested loops to process every position of the rectangle.

For every position:
- Print '*' if it belongs to the top, bottom, left, or right
  boundary.
- Otherwise, print a space.

A position is on the boundary when:
    i == 0
    j == 0
    i == n - 1
    j == m - 1

====================================================================
Algorithm:

1. Read n and m.
2. Run an outer loop for n rows.
3. Run an inner loop for m columns.
4. Check whether the current position is on the boundary.
5. If it is a boundary position, print '*'.
6. Otherwise, print a space.
7. After each row, print a newline.

====================================================================
Complexity:

Time Complexity:
O(n × m)

Space Complexity:
O(1)

====================================================================
Code
====================================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
