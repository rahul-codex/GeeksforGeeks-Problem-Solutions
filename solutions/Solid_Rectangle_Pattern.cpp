/*
====================================================================
Problem: Solid Rectangle Pattern
Platform: GeeksforGeeks
Difficulty: Basic

Problem Statement:
Given two integers n and m, print a solid rectangle pattern with
n rows and m columns using the '*' character.

There should be a space between two adjacent stars.

Input:
- Two integers n and m.
- n represents the number of rows.
- m represents the number of columns.

Output:
- Print a rectangle containing n rows and m stars in each row.

Example 1:
Input:
n = 3, m = 5

Output:
* * * * *
* * * * *
* * * * *

Example 2:
Input:
n = 4, m = 2

Output:
* *
* *
* *
* *

====================================================================
Approach:

Use nested loops.

- The outer loop controls the number of rows.
- The inner loop controls the number of stars printed in each row.
- After printing m stars, move to the next line.

====================================================================
Algorithm:

1. Read n and m.
2. Run an outer loop from 0 to n - 1.
3. For each row, run an inner loop from 0 to m - 1.
4. Print "* " in every iteration of the inner loop.
5. After completing each row, print a newline.
6. Continue until n rows are printed.

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

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
