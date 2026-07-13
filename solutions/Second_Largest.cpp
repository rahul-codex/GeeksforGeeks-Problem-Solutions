/*
====================================================================
Problem: Second Largest
Platform: GeeksforGeeks
Difficulty: Easy

Problem Statement:
Given an array of positive integers, find and return the second largest
element in the array. If the second largest element does not exist,
return -1.

Note:
The second largest element must be different from the largest element.

Input:
- An array of positive integers.

Output:
- Return the second largest element.
- Return -1 if no second largest element exists.

Example 1:
Input:
arr = [12, 35, 1, 10, 34, 1]

Output:
34

Explanation:
The largest element is 35 and the second largest element is 34.

Example 2:
Input:
arr = [10, 5, 10]

Output:
5

Explanation:
The largest element is 10 and the second largest element is 5.

Example 3:
Input:
arr = [10, 10, 10]

Output:
-1

Explanation:
All elements are equal, so a second largest element does not exist.

Algorithm:
1. Initialize two variables:
      largest = -1
      secondLargest = -1
2. Traverse the array.
3. If the current element is greater than largest:
      - Update secondLargest = largest.
      - Update largest = current element.
4. Else if the current element is greater than secondLargest
   and not equal to largest:
      - Update secondLargest.
5. After the traversal, return secondLargest.

Time Complexity:
O(n)

Space Complexity:
O(1)
====================================================================
*/

int getSecondLargest(vector<int> &arr)
{
    int largest = -1;
    int secondLargest = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}
