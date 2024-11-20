/*
https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1
*/

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User code template

class Solution
{
public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr)
    {
        // Sort the array for binary search
        sort(arr.begin(), arr.end());

        int size = arr.size();
        int s = 0, e = size - 1;

        int floor = -1, ceil = -1;

        // Find the floor using binary search
        while (s <= e)
        {
            int mid = s + (e - s) / 2; // Avoid overflow
            if (arr[mid] <= x)
            {
                floor = arr[mid]; // Update floor
                s = mid + 1;      // Search in the right half
            }
            else
            {
                e = mid - 1; // Search in the left half
            }
        }

        // Reset s and e for finding the ceil
        s = 0, e = size - 1;

        // Find the ceil using binary search
        while (s <= e)
        {
            int mid = s + (e - s) / 2; // Avoid overflow
            if (arr[mid] >= x)
            {
                ceil = arr[mid]; // Update ceil
                e = mid - 1;     // Search in the left half
            }
            else
            {
                s = mid + 1; // Search in the right half
            }
        }

        // Return the result as a vector
        return {floor, ceil};
    }
};

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int n, x;
        cin >> n >> x; // Input size of array and target value

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i]; // Input array elements
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }

    return 0;
}
