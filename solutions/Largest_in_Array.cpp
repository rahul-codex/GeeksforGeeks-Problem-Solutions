/*
====================================================================
Problem: Largest in Array
Platform: GeeksforGeeks
Difficulty: Basic

Problem Statement:
Given an array arr[], find and return the largest element in the
array.

Input:
- An integer array arr[].

Output:
- Return the largest element present in the array.

Example 1:
Input:
arr = [1, 8, 7, 56, 90]

Output:
90

Explanation:
90 is the largest element in the array.

Example 2:
Input:
arr = [5, 5, 5, 5]

Output:
5

Explanation:
All elements are equal, so 5 is the largest element.

Example 3:
Input:
arr = [10]

Output:
10

Explanation:
The array contains only one element, so it is the largest.

====================================================================
Approach:

Traverse the array once while maintaining a variable that stores the
largest element found so far.

Initialize the largest element with the first element of the array.
For every remaining element, compare it with the current largest
element and update the largest value if necessary.

====================================================================
Algorithm:

1. Initialize ans with the first element of the array.
2. Traverse the array from index 1 to the last index.
3. Compare arr[i] with ans.
4. If arr[i] is greater than ans, update ans.
5. After traversal, return ans.

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
    int largest(vector<int> &arr)
    {
        int ans = arr[0];

        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] > ans)
            {
                ans = arr[i];
            }
        }

        return ans;
    }
};
