#include<bits/stdc++.h>
using namespace std;

int F[10005];
void Processing(){
    for(int i = 1; i <= 10000; i++){
        F[i] = i;
        for(int j = 1; j <= sqrt(i); j++){
            F[i] = min(F[i], F[i-j*j] + 1);
        }
    }
}
main(){
    int t; cin >> t;
    Processing();
    while(t--){
        int n; cin >> n;
        cout << F[n] << endl;
    }
}