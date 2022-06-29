#include<bits/stdc++.h>
using namespace std;

int a[105], b[105];
bool check;
bool kiemtra(int n){
    int tong1 = 0, tong2 = 0;
    for(int i = 1; i <= n; i++){
        if(b[i] == 0) tong1 = tong1 + a[i];
        else tong2 = tong2 + a[i];
    }
    if(tong1 == tong2){
        check = true;
        return true;
    }
    else{
        check = false;
        return false;
    }
}
void NhiPhan(int i, int n){
    for(int j = 0; j <= 1; j++){
        if(check == true) break;
        b[i] = j;
        if(i == n){
            if(check == false){
                if(kiemtra(n)){
                    cout << "YES" << endl;
                }
            }
        } else NhiPhan(i + 1, n);
    }
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int tong = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            tong = tong + a[i];
        }
        if(tong % 2 == 1) cout << "NO" << endl;
        else {
            check = false;
            NhiPhan(1, n);
        }
    }
}