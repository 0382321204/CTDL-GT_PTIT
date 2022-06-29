#include<bits/stdc++.h>
using namespace std;
long long modulo = 1e9 + 7;

long long luythua(long long n, long long k){
    if(k == 0) return 1;
    if(k == 1) return n % modulo;
    long long ans = luythua(n, k/2);
    if(k % 2 == 0) return ans * ans % modulo;
    else return n * (ans * ans % modulo) % modulo;
}
main(){
    while(1){
        long long n, k;
        cin >> n >> k;
        if(n == 0 && k == 0) break;
        cout << luythua(n, k) << endl;
    }
}