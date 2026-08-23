/*
====================================================================
Problem: Factorial
Platform: GeeksforGeeks
Difficulty: Basic

Problem Statement:
Given a non-negative integer n, find the factorial of n.

The factorial of n is the product of all positive integers from 1
to n.

Factorial:
n! = n × (n - 1) × (n - 2) × ... × 1

Also:
0! = 1

Input:
- A non-negative integer n.

Output:
- Return the factorial of n.

Example 1:
Input:
n = 5

Output:
120

Explanation:
5! = 1 × 2 × 3 × 4 × 5 = 120

Example 2:
Input:
n = 4

Output:
24

Explanation:
4! = 1 × 2 × 3 × 4 = 24

====================================================================
Approach:

Use recursion.

For every value of n, calculate:

    n! = n × (n - 1)!

The recursion continues until n becomes 0 or 1. Since 0! and 1!
are both equal to 1, they are used as the base cases.

====================================================================
Algorithm:

1. Check if n is 0 or 1.
2. If yes, return 1.
3. Otherwise, recursively calculate factorial(n - 1).
4. Multiply the result by n.
5. Return the result.

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
    int factorial(int n)
    {
        // Base case
        if (n == 0 || n == 1)
        {
            return 1;
        }

        // Recursive case
        return n * factorial(n - 1);
    }
};
