#include<bits/stdc++.h>
using namespace std;

int MOD = 1e9 + 7;
long long n, k;

struct Matran {
    long long f[15][15];
};
Matran operator* (Matran A, Matran B){
    Matran C; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            C.f[i][j] = 0;
            for(int k = 0; k < n; k++){
                C.f[i][j] = (C.f[i][j] + A.f[i][k] * B.f[k][j] % MOD) % MOD;
            }
        }
    }
    return C;
}
Matran Luythua(Matran A, long long k){
    if(k == 1) return A;
    Matran X = Luythua(A, k/2);
    if(k % 2 == 0) return X * X;
    else return A * X * X;
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;

        Matran A;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> A.f[i][j];
            }
        }

        Matran KQ = Luythua(A, k);

        long long tong = 0;
        for(int i = 0; i < n; i++){
            tong += KQ.f[i][n-1];
            tong = tong % MOD;
        }

        cout << tong << endl;
    }
    return 0;
}