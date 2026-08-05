/*
====================================================================
Problem: Sort 0s, 1s and 2s
Platform: GeeksforGeeks
Difficulty: Medium

Problem Statement:
Given an array containing only 0s, 1s, and 2s, sort the array in
ascending order without using the built-in sort function.

Follow-up:
Solve the problem in one traversal using constant extra space.

Input:
- An integer array containing only 0, 1, and 2.

Output:
- Sort the array in ascending order.

Example 1:
Input:
arr = [0, 1, 2, 0, 1, 2]

Output:
[0, 0, 1, 1, 2, 2]

Explanation:
The array is sorted in ascending order.

Example 2:
Input:
arr = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]

Output:
[0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]

Explanation:
All 0s, 1s, and 2s are arranged in sorted order.

====================================================================
Approach:

Use the Dutch National Flag Algorithm.

Maintain three pointers:

- low  : Position to place the next 0.
- mid  : Current element being processed.
- high : Position to place the next 2.

Traverse the array only once and swap elements to their correct
positions.

====================================================================
Algorithm:

1. Initialize:
      low = 0
      mid = 0
      high = n - 1

2. While mid <= high:
   - If arr[mid] == 0:
       • Swap arr[low] and arr[mid].
       • Increment low and mid.
   - Else if arr[mid] == 1:
       • Increment mid.
   - Else:
       • Swap arr[mid] and arr[high].
       • Decrement high.

3. The array becomes sorted.

====================================================================
Complexity:

Time Complexity:
O(n)

Space Complexity:
O(1)

====================================================================
*/

class Solution
{
public:
    void sort012(vector<int> &arr)
    {
        int low = 0;
        int mid = 0;
        int high = arr.size() - 1;

        while (mid <= high)
        {
            if (arr[mid] == 0)
            {
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if (arr[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};
