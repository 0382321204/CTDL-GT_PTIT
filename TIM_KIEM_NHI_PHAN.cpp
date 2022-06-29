#include <bits/stdc++.h>
using namespace std;
 
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = (r + l) / 2;
        if (arr[mid] == x) return mid + 1;
        if (arr[mid] > x) return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
 
int main(void)
{
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        int arr[n+10];
        for(int i = 0; i < n; i++) cin >> arr[i];
        int result = binarySearch(arr, 0, n - 1, k);
        if(result == -1) cout << "NO" << endl;
        else cout << result << endl;
    }
    return 0;
}