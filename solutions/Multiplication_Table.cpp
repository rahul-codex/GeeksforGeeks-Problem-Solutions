/*
====================================================================
Problem: Multiplication Table
Platform: GeeksforGeeks
Difficulty: Easy

Problem Statement:
Given a number n, print its multiplication table from 1 to 10 in a
single line, with each result separated by a space.

Input:
- An integer n.

Output:
- Print the first 10 multiples of n.

Example 1:
Input:
n = 9

Output:
9 18 27 36 45 54 63 72 81 90

Example 2:
Input:
n = 2

Output:
2 4 6 8 10 12 14 16 18 20

====================================================================
Approach:

Use a for loop that runs from 1 to 10.

In every iteration, multiply n by the current loop value and print
the result.

====================================================================
Algorithm:

1. Read the value of n.
2. Run a loop from 1 to 10.
3. Calculate n * i.
4. Print the result followed by a space.
5. End the program.

====================================================================
Complexity:

Time Complexity:
O(1)

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
    int n;
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n * i << " ";
    }

    return 0;
}
