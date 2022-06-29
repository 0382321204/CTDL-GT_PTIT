#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n + 5], l[n + 5] = {0}, r[n + 5] = {0};

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 1; i < n; i++){
            if(a[i-1] < a[i]) l[i] = l[i-1] + 1; 
        }
        for(int i = n-2; i >= 0; i--){
            if(a[i] > a[i+1]) r[i] = r[i+1] + 1; 
        }

        int kq = 0;
        for(int i = 0; i < n; i++) kq = max(kq, l[i] + r[i] + 1);
        cout << kq << endl;
    }
}