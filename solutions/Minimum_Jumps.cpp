/*
====================================================================
Problem: Minimum Jumps
Platform: GeeksforGeeks
Difficulty: Medium

Problem Statement:
Given an array of non-negative integers where each element represents
the maximum number of steps that can be jumped forward from that
position, find the minimum number of jumps required to reach the last
index of the array.

If it is not possible to reach the last index, return -1.

Input:
- An array of non-negative integers.

Output:
- Return the minimum number of jumps needed to reach the last index.
- Return -1 if the last index cannot be reached.

Example 1:
Input:
arr = [1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9]

Output:
3

Explanation:
Jump from index 1 → index 2 → index 5 → last index.

Example 2:
Input:
arr = [1, 4, 3, 2, 6, 7]

Output:
2

Explanation:
Jump from the first element to the second element,
then directly to the last element.

Example 3:
Input:
arr = [0, 10, 20]

Output:
-1

Explanation:
Since the first element is 0, no jump can be made.

Algorithm:
1. If the array contains only one element, return 0.
2. If the first element is 0, return -1.
3. Initialize:
      jumps = 1
      maxReach = arr[0]
      steps = arr[0]
4. Traverse the array from index 1.
5. Update the farthest reachable index.
6. Decrease the remaining steps.
7. When no steps remain:
      - Increase the jump count.
      - If the current index cannot extend the reach,
        return -1.
      - Reset steps using the new maximum reach.
8. When the last index is reached, return the number of jumps.

Time Complexity:
O(n)

Space Complexity:
O(1)
====================================================================
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minJumps(vector<int> &arr)
    {
        int n = arr.size();

        if (n == 1)
            return 0;

        if (arr[0] == 0)
            return -1;

        int jumps = 1;
        int maxReach = arr[0];
        int steps = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
                return jumps;

            maxReach = max(maxReach, i + arr[i]);

            steps--;

            if (steps == 0)
            {
                jumps++;

                if (i >= maxReach)
                    return -1;

                steps = maxReach - i;
            }
        }

        return -1;
    }
};
