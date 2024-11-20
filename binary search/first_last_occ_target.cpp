/*
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int n = nums.size();
        int s = 0, e = n - 1;
        vector<int> v(2, -1); // Default value is [-1, -1]

        // First binary search to find the leftmost index (first occurrence)
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target)
            {
                v[0] = mid;  // Found target, update leftmost index
                e = mid - 1; // Continue searching on the left side
            }
            else if (nums[mid] > target)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }

        // Second binary search to find the rightmost index (last occurrence)
        s = 0, e = n - 1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target)
            {
                v[1] = mid;  // Found target, update rightmost index
                s = mid + 1; // Continue searching on the right side
            }
            else if (nums[mid] < target)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }

        return v;
    }
};

int main()
{
    Solution solution;

    // Test case 1: Target exists in the array
    vector<int> nums1 = {5, 7, 7, 8, 8, 10};
    int target1 = 8;
    vector<int> result1 = solution.searchRange(nums1, target1);
    cout << "Test case 1 result: [" << result1[0] << ", " << result1[1] << "]" << endl;

    // Test case 2: Target does not exist in the array
    vector<int> nums2 = {5, 7, 7, 8, 8, 10};
    int target2 = 6;
    vector<int> result2 = solution.searchRange(nums2, target2);
    cout << "Test case 2 result: [" << result2[0] << ", " << result2[1] << "]" << endl;

    // Test case 3: Target is at the beginning
    vector<int> nums3 = {1, 2, 3, 4, 5};
    int target3 = 1;
    vector<int> result3 = solution.searchRange(nums3, target3);
    cout << "Test case 3 result: [" << result3[0] << ", " << result3[1] << "]" << endl;

    // Test case 4: Target is at the end
    vector<int> nums4 = {1, 2, 3, 4, 5};
    int target4 = 5;
    vector<int> result4 = solution.searchRange(nums4, target4);
    cout << "Test case 4 result: [" << result4[0] << ", " << result4[1] << "]" << endl;

    return 0;
}
