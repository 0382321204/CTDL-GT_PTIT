#include <bits/stdc++.h>
using namespace std;

int a[105], b[105] = {0}, dem = 0;
bool Check(int n, int k){
    for(int i = 1; i < k; i++){
        if(a[b[i]] > a[b[i+1]]) return false;
    }
    return true;
}
void SinhTH(int i, int n, int k){
    for(int j = b[i-1] + 1; j <= n - k + i; j++){
        b[i] = j;
        if(i == k){
            if(Check(n, k)) dem++;
        }
        else SinhTH(i+1, n, k);
    }
}
main(){
    int n, k;
    cin >> n >> k;
    b[0] = 0;
    for(int i = 1; i <= n; i++) cin >> a[i];
    SinhTH(1, n, k);
    cout << dem << endl;
}