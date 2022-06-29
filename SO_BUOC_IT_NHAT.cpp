#include<bits/stdc++.h>
using namespace std;

int n, A[1005], C[1005];
void Processing(){
    memset(C, 0, sizeof(C));
    int kq = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            if(A[j] <= A[i]) C[i] = max(C[i], C[j] + 1);
        }
        kq = max(kq, C[i]);
    }
    cout << n - (kq + 1) << endl;
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> A[i];
        Processing();
    }
}