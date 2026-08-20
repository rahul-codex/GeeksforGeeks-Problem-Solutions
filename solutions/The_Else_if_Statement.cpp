/*
====================================================================
Problem: The Else if Statement
Platform: GeeksforGeeks
Difficulty: Basic

Problem Statement:
Given a number, use if, else if, and else conditional statements
according to the following conditions:

- If number is greater than 100, print "Big".
- Else if number is smaller than 10, print "Small".
- Else, print "Number".

Input:
- An integer number.

Output:
- Print "Big", "Small", or "Number" according to the condition.

Example 1:
Input:
number = 9

Output:
Small

Explanation:
9 is smaller than 10, so the else if condition is executed.

Example 2:
Input:
number = 101

Output:
Big

Explanation:
101 is greater than 100, so the if condition is executed.

Example 3:
Input:
number = 30

Output:
Number

Explanation:
30 is neither greater than 100 nor smaller than 10, so the else
condition is executed.

====================================================================
Approach:

Use an if-else if-else structure to check the number against the
given conditions.

The conditions are checked from top to bottom. Once a condition is
true, its corresponding statement is executed and the remaining
conditions are skipped.

====================================================================
Algorithm:

1. Check if number > 100.
2. If true, print "Big".
3. Otherwise, check if number < 10.
4. If true, print "Small".
5. Otherwise, print "Number".
6. Print a newline after the output.

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
    void utility(int number)
    {
        if (number > 100)
        {
            cout << "Big" << endl;
        }
        else if (number < 10)
        {
            cout << "Small" << endl;
        }
        else
        {
            cout << "Number" << endl;
        }
    }
};
