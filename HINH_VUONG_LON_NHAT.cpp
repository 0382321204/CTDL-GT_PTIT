#include<bits/stdc++.h>
using namespace std;

int A[505][505], C[505][505], N, M;
int tinh(){
    memset(C, 0, sizeof(C));
    int i, j, kq = 0;
    for(i = 1; i <= M; i++) C[0][i] = A[0][i];
    for(i = 1; i <= N; i++) C[i][0] = A[i][0];
    for(i = 1; i <= N; i++){
        for(j = 1; j <= M; j++){
            if(A[i][j] == 1){
                C[i][j] = min(C[i-1][j], min(C[i][j-1], C[i-1][j-1])) + 1;
            } else C[i][j] = 0;
            kq = max(kq, C[i][j]);
        }
    }
    return kq;
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> N >> M;
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= M; j++){
                cin >> A[i][j];
            }
        }
        cout << tinh() << endl;
    }
}