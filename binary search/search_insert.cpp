/*
https://leetcode.com/problems/search-insert-position/description/
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int size = nums.size();
        int s = 0;
        int e = size - 1;
        int ans = -1;

        // If the target is greater than the largest element, return size
        if (nums[e] < target)
            return size;

        // Binary search for the insert position
        while (s <= e)
        {
            int mid = s + (e - s) / 2; // Avoid overflow
            if (nums[mid] >= target)
            {
                ans = mid;   // Potential answer
                e = mid - 1; // Search in the left half
            }
            else
            {
                s = mid + 1; // Search in the right half
            }
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int n, target;
        cin >> n >> target; // Input size of array and target

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i]; // Input array elements
        }

        Solution sol;
        int result = sol.searchInsert(nums, target);
        cout << result << endl; // Output the result
    }

    return 0;
}
