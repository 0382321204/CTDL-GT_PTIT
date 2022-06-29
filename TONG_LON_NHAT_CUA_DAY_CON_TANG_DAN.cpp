#include<bits/stdc++.h>
using namespace std;

int A[1005], C[1005];
void Processing(int n){
    int kq = 0;
    for(int i = 0; i < n; i++){
        C[i] = A[i];
        for(int j = 0; j < i; j++){
            if(A[j] < A[i]) C[i] = max(C[i], C[j] + A[i]);
        }
        kq = max(kq, C[i]);
    }
    cout << kq << endl;
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0; i < n; i++) cin >> A[i];
        Processing(n);
    }
}