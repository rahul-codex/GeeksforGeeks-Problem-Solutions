/*
====================================================================
Problem: Odd or Even
Platform: GeeksforGeeks
Difficulty: Basic

Problem Statement:
Given a positive integer n, determine whether the number is odd or
even.

Return true if the number is even and false if the number is odd.

Input:
- A positive integer n.

Output:
- Return true if n is even.
- Return false if n is odd.

Example 1:
Input:
n = 15

Output:
false

Explanation:
15 is not divisible by 2, so it is an odd number.

Example 2:
Input:
n = 44

Output:
true

Explanation:
44 is divisible by 2, so it is an even number.

====================================================================
Approach:

Use the modulo (%) operator.

If n % 2 is equal to 0, the number is even. Otherwise, the number
is odd.

====================================================================
Algorithm:

1. Take the given integer n.
2. Calculate n % 2.
3. If the remainder is 0, return true.
4. Otherwise, return false.

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

class Solution
{
public:
    bool isEven(int n)
    {
        return (n % 2 == 0);
    }
};
