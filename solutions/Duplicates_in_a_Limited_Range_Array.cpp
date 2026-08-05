/*
====================================================================
Problem: Duplicates in a Limited Range Array
Platform: GeeksforGeeks
Difficulty: Easy

Problem Statement:
Given an array arr[] of size n containing integers in the range
[1, n], where each element appears at most twice, return all elements
that appear exactly twice.

Note:
The returned elements can be in any order. The driver code will
display them in sorted order.

Input:
- An integer array arr[].

Output:
- Return a vector containing all duplicate elements.

Example 1:
Input:
arr = [2, 3, 1, 2, 3]

Output:
[2, 3]

Explanation:
Both 2 and 3 appear twice.

Example 2:
Input:
arr = [3, 1, 2]

Output:
[]

Explanation:
There are no duplicate elements.

====================================================================
Approach:

- Sort the array.
- Traverse the sorted array.
- Whenever two consecutive elements are equal, they are duplicates.
- Add the duplicate element only once to the answer vector.

====================================================================
Algorithm:

1. Sort the array.
2. Create an empty vector ans.
3. Traverse the array from index 1 to n-1.
4. If arr[i] == arr[i-1]:
   - If ans is empty or its last element is different,
     add arr[i] to ans.
5. Return ans.

====================================================================
Complexity:

Time Complexity:
O(n log n)

Space Complexity:
O(1)
(Excluding the output vector)

====================================================================
*/

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &arr)
    {
        vector<int> ans;

        sort(arr.begin(), arr.end());

        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] == arr[i - 1])
            {
                if (ans.empty() || ans.back() != arr[i])
                {
                    ans.push_back(arr[i]);
                }
            }
        }

        return ans;
    }
};
