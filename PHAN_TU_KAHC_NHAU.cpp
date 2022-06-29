#include<bits/stdc++.h>
using namespace std;

vector <int> a;
vector <int> b; 

int xuly(int n){
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]) return i + 1;
    }
    return n;
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            a.push_back(x);
        }
        for(int i = 0; i < n-1; i++){
            int x; cin >> x;
            b.push_back(x);
        }
        cout << xuly(n) << endl;
        a.clear();
        b.clear();
    }
    return 0;
}