#include<bits/stdc++.h>
using namespace std;

int n, m;
int F[105][25005], C[105];

int Quyhoachdong(){
    memset(F, 0, sizeof(F));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            F[i][j] = F[i-1][j];
            if(j >= C[i]){
                F[i][j] = max(F[i][j], F[i-1][j-C[i]] + C[i]);
            }
        }
    }
    return F[n][m];
} 
main(){
    cin >> m >> n;
    for(int i = 1; i <= n; i++) cin >> C[i];
    cout << Quyhoachdong() << endl;
}