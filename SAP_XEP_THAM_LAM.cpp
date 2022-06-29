#include<bits/stdc++.h>
using namespace std;

/* main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[55], b[55], check = 1;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        for(int i = 0; i < n / 2; i++){
            if(b[i] != a[i] && b[i] != a[n - i - 1]){
                check = 0;
                break;
            }
        }
        if(check == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
} */
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[55], b[55], check = 1;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        for(int i = 0; i < n; i++){
            if(a[i] != b[i] && a[i] != b[n - i - 1]){
                check = 0;
                break;
            }
        }
        if(check == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}