/*
====================================================================
Problem: Array Search
Platform: GeeksforGeeks
Difficulty: Basic

Problem Statement:
Given an array arr[] of n integers and an integer x, find whether
x is present in the array.

Return the index of the first occurrence of x. If x is not present,
return -1.

Input:
- An integer array arr[].
- An integer x to search for.

Output:
- Return the index of the first occurrence of x.
- Return -1 if x is not present in the array.

Example 1:
Input:
arr = [1, 2, 3, 4]
x = 3

Output:
2

Explanation:
The element 3 is present at index 2.

Example 2:
Input:
arr = [10, 8, 30, 4, 5]
x = 5

Output:
4

Explanation:
The element 5 is present at index 4.

Example 3:
Input:
arr = [10, 8, 30]
x = 6

Output:
-1

Explanation:
The element 6 is not present in the array.

====================================================================
Approach:

Use Linear Search.

Traverse the array from left to right and compare every element
with x. As soon as x is found, return its index.

Since the array is traversed from the beginning, the first matching
element will always be returned.

====================================================================
Algorithm:

1. Start traversing the array from index 0.
2. Compare arr[i] with x.
3. If arr[i] == x, return i.
4. Continue until the end of the array.
5. If x is not found, return -1.

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

class Solution
{
public:
    int search(vector<int> &arr, int x)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == x)
            {
                return i;
            }
        }

        return -1;
    }
};
