#include<bits/stdc++.h>
using namespace std;

long long modulo = 1e9 + 7;

long long LuyThua(long long n, long long k){
    if(k == 0) return 1;
    long long ans = LuyThua(n, k/2);
    if(k % 2 == 0) return ans * ans % modulo;
    else return n * (ans * ans % modulo) % modulo;
}

long long xuly(long long n){
    long long temp = n, ans = 0;;
    while(n > 0){
        ans = ans * 10 + n % 10;
        n = n / 10;
    }
    return LuyThua(temp, ans);
}
main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        cout << xuly(n) << endl;
    }
    return 0;
}