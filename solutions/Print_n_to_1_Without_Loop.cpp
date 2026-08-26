/*
====================================================================
Problem: Print n to 1 Without Loop
Platform: GeeksforGeeks
Difficulty: Basic

Problem Statement:
Given a positive integer n, print all numbers from n to 1 in
decreasing order without using loops.

The numbers should be printed as space-separated integers.

Input:
- A positive integer n.

Output:
- Print numbers from n down to 1.

Example:
Input:
n = 10

Output:
10 9 8 7 6 5 4 3 2 1

====================================================================
Approach:

Use recursion instead of a loop.

For every recursive call:
- First print the current value of n.
- Then call the function with n - 1.

The recursion stops when n becomes 0.

Since the current number is printed before the recursive call,
the numbers appear in decreasing order.

====================================================================
Algorithm:

1. If n == 0, return.
2. Print n.
3. Call printNos(n - 1).
4. Continue until n becomes 0.

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

class Solution
{
public:
    void printNos(int n)
    {
        // Base case
        if (n == 0)
        {
            return;
        }

        // Print current number
        cout << n << " ";

        // Recursive call
        printNos(n - 1);
    }
};
