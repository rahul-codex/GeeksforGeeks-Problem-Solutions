/*
====================================================================
Problem: Indexes of Subarray Sum
Platform: GeeksforGeeks
Difficulty: Medium

Problem Statement:
Given an array of non-negative integers and a target value, find the
first continuous subarray whose sum is equal to the target. Return the
1-based starting and ending indices of that subarray.

If no such subarray exists, return [-1].

Input:
- An array of non-negative integers.
- An integer target.

Output:
- Return the starting and ending (1-based) indices of the first
  subarray whose sum equals the target.
- If no such subarray exists, return [-1].

Example 1:
Input:
arr = [1, 2, 3, 7, 5]
target = 12

Output:
[2, 4]

Explanation:
The sum of elements from index 2 to 4 is 12.

Example 2:
Input:
arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
target = 15

Output:
[1, 5]

Explanation:
The sum of elements from index 1 to 5 is 15.

Example 3:
Input:
arr = [5, 3, 4]
target = 2

Output:
[-1]

Explanation:
No continuous subarray has sum equal to 2.

Algorithm:
1. Initialize two variables:
   - start = 0
   - sum = 0
2. Traverse the array using the end pointer.
3. Add the current element to sum.
4. While sum is greater than target:
      - Remove arr[start] from sum.
      - Increment start.
5. If sum becomes equal to target:
      - Store start + 1 and end + 1 in the result array.
      - Return success.
6. If no subarray is found after traversal, return failure.

Time Complexity:
O(n)

Space Complexity:
O(1)
====================================================================
*/

int subarraySum(int* arr, int n, int target, int* res)
{
    int start = 0;
    int sum = 0;

    for (int end = 0; end < n; end++)
    {
        sum += arr[end];

        while (sum > target)
        {
            sum -= arr[start];
            start++;
        }

        if (sum == target)
        {
            res[0] = start + 1;
            res[1] = end + 1;

            return 1;
        }
    }

    return 0;
}
