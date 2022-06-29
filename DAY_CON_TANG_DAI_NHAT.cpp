#include<bits/stdc++.h>
using namespace std;

int a[1005], C[1005], kq = 0;
void Processing(int n){
    memset(C, sizeof(C), 0);
    for(int i = 1; i <= n; i++){
        C[i] = 1;
        for(int j = 1; j < i; j++){
            if(a[j] < a[i]) C[i] = max(C[i], C[j] + 1);
        }
        kq = max(kq, C[i]);
    }
    cout << kq;
}
main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    Processing(n);
}