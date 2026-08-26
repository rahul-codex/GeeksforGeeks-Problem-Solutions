/*
====================================================================
Problem: GCD of Two Numbers
Platform: GeeksforGeeks
Difficulty: Basic

Problem Statement:
Given two positive integers a and b, find their Greatest Common
Divisor (GCD).

The GCD of two numbers is the largest positive integer that divides
both numbers without leaving a remainder.

Note:
Do not use the built-in GCD function.

Input:
- Two positive integers a and b.

Output:
- Return the GCD of a and b.

Example 1:
Input:
a = 20, b = 28

Output:
4

Explanation:
The common divisors of 20 and 28 include 1, 2, and 4.
Therefore, GCD(20, 28) = 4.

Example 2:
Input:
a = 60, b = 36

Output:
12

Explanation:
The greatest common divisor of 60 and 36 is 12.

====================================================================
Approach:

Use the Euclidean Algorithm.

The key property of GCD is:

    GCD(a, b) = GCD(b, a % b)

Repeatedly replace:
- a with b
- b with a % b

When b becomes 0, a contains the GCD.

====================================================================
Algorithm:

1. If a is greater than b, swap them.
2. While b is not 0:
   - Store b in a temporary variable.
   - Set b = a % b.
   - Set a = the previous value of b.
3. When b becomes 0, return a.

====================================================================
Complexity:

Time Complexity:
O(log(min(a, b)))

Space Complexity:
O(1)

====================================================================
Code
====================================================================
*/

int gcd(int a, int b)
{
    if (a > b)
    {
        swap(a, b);
    }

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}
