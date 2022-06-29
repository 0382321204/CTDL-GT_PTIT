#include<bits/stdc++.h>
using namespace std;

void xuat(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
main (){
    int n; cin >> n;
    int a[n+10];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    xuat(a, n);
    while(next_permutation(a, a+n)){
        xuat(a, n);
    }
}