#include<bits/stdc++.h>
using namespace std;

int n, k, s, kq;
int a[25];
void processing(){
    int tong = 0;
    for(int i = 1; i <= k; i++) tong += a[i];
    if(tong == s) kq++;
}
void tohop(int i){
    for(int j = a[i-1]+1; j <= n-k+i; j++){
        a[i] = j;
        if(i == k) processing();
        else tohop(i+1);
    }
}
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while(1){
        cin >> n >> k >> s;
        memset(a, 0, sizeof(a));
        if(n == 0 & k == 0 && s == 0) break;
        kq = 0;
        tohop(1);
        cout << kq << endl;
    }
    return 0;
}