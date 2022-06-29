#include<bits/stdc++.h>
using namespace std;

long long modulo = 1e9 + 7;

long long luythua(int n, int k){
    if(k == 0) return 1;
    long long ans = luythua(n, k/2);
    cout << "k/2 = " << k/2 << endl;
    if(k % 2 == 0) return ans * ans % modulo;
    else return n * (ans * ans % modulo) % modulo;
}
main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        cout << luythua(n, k) << endl;
    }
}