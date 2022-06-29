#include<bits/stdc++.h>
using namespace std;

int n, C[30][30], A[30], B[30] = {0};
int fopt = 1e9, cmin = 1e9, cost = 0;

void quaylui(int i){
    int j;
    for(j = 1; j <= n; j++){
        if(B[j] == 0){
            A[i] = j; B[j] = 1;
            cost = cost + C[A[i-1]][A[i]];
            if(i == n){
                fopt = min(fopt, v);
            } else if(cost + (n - i + 1)*cmin < fopt){
                quaylui(i + 1);
            }
            cost = cost - C[A[i-1]][A[i]];
            B[j] = 0;
        }
    }
}
int dem(string s1, string s2){
    int i = 0, j = 0, d = 0;
    while(i < s1.size() && j < s2.size()){
        if(s1[i] == s2[j]){
            d++; i++; j++;
        } else if(s1[i] < s2[j]) i++;
        else j++;
    }
    return d;
}
main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> C[i][j];
            if(i != j) cmin = min(cmin, C[i][j]);
        }
    }
    A[1] = 1;
    quaylui(2);
    cout << fopt << endl;
}