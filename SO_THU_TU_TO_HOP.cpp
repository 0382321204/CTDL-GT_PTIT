#include<bits/stdc++.h>
using namespace std;

int a[100] = {0};
int b[100], dem;

bool check(int k){
    for(int i = 1; i <= k; i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

void SinhTH(int i, int n, int k){
    for(int j = a[i-1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if(i == k){
            dem++;
            if(check(k)){
                cout << dem << endl;
                break;
            }
        }
        else SinhTH(i+1, n , k);
    }
}

main(){
    int t; cin >> t;
    while(t--){
        int n, k; 
        cin >> n >> k;

        for(int i = 1; i <= k; i++){
            cin >> b[i];
        }
        
        dem = 0;
        SinhTH(1, n, k);
    }

    return 0;
}