/*
https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countFreq(vector<int> &arr, int target)
    {
        // Code here to count frequency of target
        int n = arr.size();
        int s = 0;
        int e = n - 1;
        int c = 0; // Count of target element

        // Find the leftmost occurrence of target using binary search
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (arr[mid] == target)
            {
                c++;
                e = mid - 1; // Search on the left side for more occurrences
            }
            else if (arr[mid] < target)
            {
                s = mid + 1; // Target is in the right half
            }
            else
            {
                e = mid - 1; // Target is in the left half
            }
        }

        // Reset the search range
        s = 0;
        e = n - 1;

        // Find the rightmost occurrence of target using binary search
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (arr[mid] == target)
            {
                c++;
                s = mid + 1; // Search on the right side for more occurrences
            }
            else if (arr[mid] < target)
            {
                s = mid + 1; // Target is in the right half
            }
            else
            {
                e = mid - 1; // Target is in the left half
            }
        }

        return c;
    }
};

// Driver Code
int main()
{
    int test_case;
    cin >> test_case;
    cin.ignore(); // To ignore the newline after reading test_case
    while (test_case--)
    {
        int d; // Target element
        vector<int> arr;
        string input;

        // Reading the array
        getline(cin, input); // Input array as a string
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number); // Convert string to vector
        }

        // Reading the target value
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number)
        {
            d = number; // Only the first number in the second line is the target
        }

        Solution ob;
        int ans = ob.countFreq(arr, d); // Call the function to count frequency
        cout << ans << endl;            // Output the result

        cout << "~" << endl; // Print separator
    }
    return 0;
}
