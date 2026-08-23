/*
====================================================================
Problem: 1 to n Without Loops
Platform: GeeksforGeeks
Difficulty: Basic

Problem Statement:
Given a positive integer n, print all numbers from 1 to n without
using loops.

The numbers should be printed as space-separated integers.

Input:
- A positive integer n.

Output:
- Print numbers from 1 to n separated by spaces.

Example 1:
Input:
n = 5

Output:
1 2 3 4 5

Explanation:
The numbers from 1 to 5 are printed using recursion.

Example 2:
Input:
n = 10

Output:
1 2 3 4 5 6 7 8 9 10

Explanation:
The numbers from 1 to 10 are printed using recursion.

====================================================================
Approach:

Use recursion instead of a loop.

For a given n:
- First call the function with n - 1.
- After the recursive call returns, print n.

This causes the numbers to be printed in increasing order.

The recursion continues until n becomes 0, which is the base case.

====================================================================
Algorithm:

1. If n == 0, return.
2. Call printTillN(n - 1).
3. Print n.
4. The recursive calls return one by one, printing numbers from
   1 to n.

====================================================================
Complexity:

Time Complexity:
O(n)

Space Complexity:
O(n)

The O(n) space is used by the recursion call stack.

====================================================================
Code
====================================================================
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    void printTillN(int n)
    {
        // Base case
        if (n == 0)
            return;

        // Recursive call
        printTillN(n - 1);

        // Print after returning from recursion
        cout << n << " ";
    }
};
