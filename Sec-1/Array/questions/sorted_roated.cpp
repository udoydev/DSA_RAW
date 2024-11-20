/*

https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
1752

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    //  look pdf of dsa for this solution
    int n;
    cin >> n;
    int a[n];
    // formula if(a[i]>a[(i+1)%size])cnt++ ; if cnt<=1 than return true else false
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[(i + 1) % n])
            cnt++;
    }

    if (cnt <= 1)
    {
        cout << "TRUE" << endl;
    }
    else
    {
        cout << "FALSE" << endl;
    }

    // return with 0
    return 0;
}