/*
====================================================================
Problem: Min and Max in Array
Platform: GeeksforGeeks
Difficulty: Basic

Problem Statement:
Given an array arr[], find the minimum and maximum elements in the
array and return them.

Input:
- An integer array arr[].

Output:
- Return the minimum and maximum elements as [minimum, maximum].

Example 1:
Input:
arr = [1, 4, 3, 5, 8, 6]

Output:
[1, 8]

Explanation:
The minimum element is 1 and the maximum element is 8.

Example 2:
Input:
arr = [12, 3, 15, 7, 9]

Output:
[3, 15]

Explanation:
The minimum element is 3 and the maximum element is 15.

====================================================================
Approach:

Traverse the array once and maintain two variables:
- minElement stores the smallest element found so far.
- maxElement stores the largest element found so far.

For every element, compare it with both variables and update them
when necessary.

====================================================================
Algorithm:

1. Initialize minElement and maxElement with arr[0].
2. Traverse the array from index 1 to the end.
3. If arr[i] is smaller than minElement, update minElement.
4. If arr[i] is greater than maxElement, update maxElement.
5. Return {minElement, maxElement}.

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
    vector<int> getMinMax(vector<int> &arr)
    {
        int minElement = arr[0];
        int maxElement = arr[0];

        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] > maxElement)
            {
                maxElement = arr[i];
            }

            if (arr[i] < minElement)
            {
                minElement = arr[i];
            }
        }

        return {minElement, maxElement};
    }
};
