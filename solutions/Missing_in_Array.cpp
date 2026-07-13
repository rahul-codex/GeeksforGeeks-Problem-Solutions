/*
====================================================================
Problem: Missing in Array
Platform: GeeksforGeeks
Difficulty: Easy

Problem Statement:
You are given an array of size n - 1 containing distinct integers from
1 to n. Exactly one number is missing from the sequence. Find and
return the missing number.

Input:
- An integer array of size (n - 1).
- The array contains distinct numbers from 1 to n with one number
  missing.

Output:
- Return the missing integer.

Example 1:
Input:
arr = [1, 2, 3, 5]

Output:
4

Explanation:
All numbers from 1 to 5 are present except 4.

Example 2:
Input:
arr = [8, 2, 4, 5, 3, 7, 1]

Output:
6

Explanation:
All numbers from 1 to 8 are present except 6.

Example 3:
Input:
arr = [1]

Output:
2

Explanation:
Only 1 is present, so the missing number is 2.

Algorithm:
1. Calculate the expected sum of numbers from 1 to n using:
      total = n × (n + 1) / 2
   where n = size + 1.
2. Calculate the sum of all elements in the given array.
3. Subtract the array sum from the expected sum.
4. The result is the missing number.

Time Complexity:
O(n)

Space Complexity:
O(1)
====================================================================
*/

int missingNum(int *arr, int size)
{
    long long total = ((long long)(size + 1) * (size + 2)) / 2;

    long long sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return (int)(total - sum);
}
