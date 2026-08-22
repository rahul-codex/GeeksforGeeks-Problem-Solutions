/*
====================================================================
Problem: Floyd's Triangle
Platform: GeeksforGeeks
Difficulty: Basic

Problem Statement:
Given a number n, print Floyd's Triangle with n lines.

Floyd's Triangle is a pattern of consecutive natural numbers arranged
in rows. The i-th row contains exactly i numbers.

Input:
- An integer n representing the number of rows.

Output:
- Print Floyd's Triangle with n rows.

Example 1:
Input:
n = 4

Output:
1
2 3
4 5 6
7 8 9 10

Explanation:
The triangle contains 4 rows. Numbers start from 1 and increase
sequentially, while each row contains one more number than the
previous row.

Example 2:
Input:
n = 5

Output:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

====================================================================
Approach:

Use nested loops.

- The outer loop controls the number of rows.
- The inner loop prints the required number of elements in each row.
- A separate variable m is used to keep track of consecutive numbers.
- After printing each row, move to the next line.

====================================================================
Algorithm:

1. Read the value of n.
2. Initialize m = 1.
3. Run the outer loop from 0 to n - 1.
4. For each row i, run the inner loop from 0 to i.
5. Print m and increment it.
6. After completing a row, print a newline.
7. Continue until n rows are printed.

====================================================================
Complexity:

Time Complexity:
O(n²)

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

    int m = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << m++ << " ";
        }

        cout << endl;
    }

    return 0;
}
