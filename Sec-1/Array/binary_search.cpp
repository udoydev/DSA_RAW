#include <bits/stdc++.h>
using namespace std;

int Binary_search(int a[], int size, int key) {
    int low = 0; // starting index
    int high = size - 1; // ending index

    while (low <= high) {
        // Corrected mid calculation
        int mid = (low+high) / 2;//ensure to always use bracket

        if (a[mid] == key) return mid;
        else if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }

    return -1; // Key not found
}

int main() {
    #ifndef ONLINE_JUDGE // if not defined
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // if defined

    int a[] = {1, 5, 10, 11, 33, 44, 55, 66};
    int size = sizeof(a) / sizeof(int);
    int key = 44;

    int ans = Binary_search(a, size, key);

    if (ans != -1) 
        cout << "The key is found at index " << ans << endl;
    else 
        cout << "The " << key << " is not found!" << endl;

    return 0;
}
