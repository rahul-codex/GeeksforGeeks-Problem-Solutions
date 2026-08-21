/*
====================================================================
Problem: Sum of Natural Numbers
Platform: GeeksforGeeks
Difficulty: Basic

Problem Statement:
Given an integer n, calculate the sum of all natural numbers from
1 to n, inclusive.

If n is 0, the sum should be 0.

Input:
- An integer n.

Output:
- Return/print the sum of all natural numbers from 1 to n.

Example 1:
Input:
n = 6

Output:
21

Explanation:
1 + 2 + 3 + 4 + 5 + 6 = 21

Example 2:
Input:
n = 4

Output:
10

Explanation:
1 + 2 + 3 + 4 = 10

Example 3:
Input:
n = 0

Output:
0

Explanation:
There are no natural numbers to add, so the sum is 0.

====================================================================
Approach:

Use a loop to add every number from n down to 1.

Initialize the sum as 0 and repeatedly add the current value of n
to the sum while decreasing n by 1.

====================================================================
Algorithm:

1. Read the value of n.
2. Initialize ans = 0.
3. Run a loop from n down to 1.
4. Add the current number to ans.
5. Print ans.

====================================================================
Complexity:

Time Complexity:
O(n)

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
    int n;
    cin >> n;

    int ans = 0;

    for (int i = n; i > 0; i--)
    {
        ans += i;
    }

    cout << ans;

    return 0;
}
