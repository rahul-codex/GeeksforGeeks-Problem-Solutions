/*
====================================================================
Problem: While Loop
Platform: GeeksforGeeks
Difficulty: Basic

Problem Statement:
Given a number x, print all the numbers from x to 0 in decreasing
order in a single line.

Input:
- An integer x.

Output:
- Print numbers from x down to 0.

Example 1:
Input:
x = 3

Output:
3 2 1 0

Explanation:
Numbers are printed in decreasing order from 3 to 0.

Example 2:
Input:
x = 5

Output:
5 4 3 2 1 0

Explanation:
Numbers are printed in decreasing order from 5 to 0.

====================================================================
Approach:

Use a while loop.

Start with x and keep printing the current value. After each
iteration, decrease x by 1. Continue until x becomes less than 0.

====================================================================
Algorithm:

1. Start with the given value x.
2. While x is greater than or equal to 0:
   - Print x.
   - Decrease x by 1.
3. Stop when x becomes less than 0.

====================================================================
Complexity:

Time Complexity:
O(x)

Space Complexity:
O(1)

====================================================================
Code
====================================================================
*/

class Solution
{
public:
    void utility(int x)
    {
        while (x >= 0)
        {
            cout << x << " ";
            x--;
        }
    }
};
