#include<bits/stdc++.h>
using namespace std;

long long modulo = 123456789;

long long LuyThua(long long n, long long k){
    if(k == 0) return 1;
    long long ans = LuyThua(n, k / 2);
    if(k % 2 == 0) return ans * ans % modulo;
    else return n * (ans * ans % modulo) % modulo;
}
main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        cout << LuyThua(2, n-1) << endl;
    }
    return 0;
}