#include<bits/stdc++.h>
using namespace std;

int n, k, a[45], b[45];

void NextToHop(){
    int i = k;
    while(i > 0 && a[i] == n - k + i) i--;
    if(i > 0){
        a[i] = a[i] + 1;
        for(int j = i + 1; j <= k; j++) a[j] = a[j-1] + 1;
    }
}
void Processing(){
    int dem = 0;
    for(int i = 1; i <= k; i++){
        if(binary_search(b+1, b+k+1, a[i])) dem++;
    }
    if(dem < k) cout << k - dem << endl;
    else cout << dem << endl;
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for (int i = 1; i <= k; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        NextToHop();
        Processing();
    }
    return 0;
}