#include<bits/stdc++.h>
using namespace std;

long long tron(long long a[], int l, int m, int r){
    int i, j, k, n1 = m-l+1, n2 = r-m;
    long long L[n1], R[n2];
    for(i = 0; i < n1; i++) L[i] = a[l+i];
    for(i = 0; i < n2; i++) R[i] = a[m+i+1];
    i = 0, j = 0, k = l;
    long long dem = 0;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]) a[k++] = L[i++];
        else {
            dem = dem + (n1-i);
            a[k++] = R[j++];
        }
    }
    while(i < n1) a[k++] = L[i++];
    while(j < n2) a[k++] = R[j++];
    return dem;
}
long long xuly(long long a[], int l, int r){
    
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << xuly(a, 0, n-1) << endl;
    }
}