#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n, dem = 0;
        cin >> n;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            if (x == 0) dem++;
        }
        cout << dem << endl;
    }
    return 0;
}