#include<bits/stdc++.h>
using namespace std;

int n, A[1000005], C[1000005];
int Processing(){
    C[0] = A[0];
    C[1] = max(A[1], A[0]);
    for(int i = 2; i < n; i++){
        C[i] = max(C[i-2] + A[i], C[i-1]);
    }
    return C[n - 1];
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++) cin >> A[i];
        cout << Processing() << endl;
    }
    return 0;
}