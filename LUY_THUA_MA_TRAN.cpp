#include<bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
Matran operator*(Matran A, Matran B){
    Matran C; int i, j, k;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            C.f[i][j] = 0;
            for(k = 0; k < 2; k++){
                C.f[i][j] = (C.f[i][j] + A.f[i][k] * B.f[k][j] % M) % M;
            }
        }
    }
    return C; 
}
Matran powMod(Matran A, int n){
    if(n == 1) return A;
    Matran X = powMod(A, n/2);
    if(n % 2 == 0) return X*X;
    return A*X*X;
}
main(){
    int t, k, i, j;
    cin >> t;
    while(t--){
        cin >> n >> k;
        Matran A;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++)
                cin >> A.f[i][j];
        }
        Matran KQ = powMod(A, k);
        long long kq = 0;
        for(i = 0; i < n; i++){
            kq = (kq + KQ.f[i][n-1]) % M;
        }
        cout << kq << endl;
    }
}