#include<bits/stdc++.h>
using namespace std;

int n, C[20][20], A[20], B[20] = {0};
int fopt = 1e9, cmin = 1e9, cost = 0;
vector <int> xopt;

void quaylui(int i){
    int j;
    for(j = 2; j <= n; j++){
        if(B[j] == 0){
            A[i] = j; B[j] = 1;
            cost = cost + C[A[i-1]][A[i]];
            if(i == n){
                int v = cost + C[A[n]][A[1]];
                if(v < fopt){
                    fopt = v;
                    xopt.clear();
                    for(int k = 2; k <= n; k++){
                        xopt.push_back(A[k]);
                    }
                }
            } else if(cost + (n - i + 1)*cmin < fopt){
                quaylui(i + 1);
            }
            cost = cost - C[A[i-1]][A[i]];
            B[j] = 0;
        }
    }
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

    cout << "(1,";
    for(int i = 0; i < xopt.size(); i++){
        cout << xopt[i] << ",";
    }
    cout << "1)" << endl;
    cout << fopt << endl;
}