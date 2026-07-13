/*
====================================================================
Problem: Kadane's Algorithm
Platform: GeeksforGeeks
Difficulty: Medium

Problem Statement:
Given an integer array, find the maximum possible sum of any
contiguous subarray containing at least one element.

Input:
- An integer array.

Output:
- Return the maximum sum among all possible contiguous subarrays.

Example 1:
Input:
arr = [2, 3, -8, 7, -1, 2, 3]

Output:
11

Explanation:
The subarray [7, -1, 2, 3] has the maximum sum of 11.

Example 2:
Input:
arr = [-2, -4]

Output:
-2

Explanation:
The subarray [-2] has the maximum sum.

Example 3:
Input:
arr = [5, 4, 1, 7, 8]

Output:
25

Explanation:
The entire array forms the maximum sum subarray.

Algorithm:
1. Initialize:
      currentSum = 0
      maxSum = INT_MIN
2. Traverse the array from left to right.
3. Add the current element to currentSum.
4. Update maxSum with the larger of maxSum and currentSum.
5. If currentSum becomes negative, reset it to 0.
6. Continue until the end of the array.
7. Return maxSum.

Time Complexity:
O(n)

Space Complexity:
O(1)
====================================================================
*/

#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    int maxSubarraySum(vector<int> &arr)
    {
        int currentSum = 0;
        int maxSum = INT_MIN;

        for (int i = 0; i < arr.size(); i++)
        {
            currentSum += arr[i];

            if (currentSum > maxSum)
            {
                maxSum = currentSum;
            }

            if (currentSum < 0)
            {
                currentSum = 0;
            }
        }

        return maxSum;
    }
};
