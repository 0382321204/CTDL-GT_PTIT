#include <bits/stdc++.h>
using namespace std;

long long C[1005][1005], modulo = 1e9 + 7;
void Processing(){ // i = n, j = k;
    for(int i = 0; i <= 1000; i++){
        for(int j = 0; j <= i; j++){
            if(i == 0 || i == j) C[i][j] = 1;
            else C[i][j] = C[i-1][j] + C[i-1][j-1];
            C[i][j] = C[i][j] % modulo;
        }
    }
}
main(){
    Processing();
    int t; cin >> t;
    while(t--){
        int k, n; cin >> k >> n;
        cout << C[k][n] << endl;
    }
}

// * CT: C[k][n] = C[k][n-1] + C[k-1][n-1].
// * C[0][n] = C[n][n] = 1.