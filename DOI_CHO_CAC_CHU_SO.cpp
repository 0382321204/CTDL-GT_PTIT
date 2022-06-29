#include<bits/stdc++.h>
using namespace std;

int k;
string s, kq;

void quaylui(int k){
    if(k == 0) return;
    int i, j, n = s.length();
    for(i = 0; i < n - 1; i++){
        for(j = i+1; j < n; j++){
            if(s[j] > s[i]){
                swap(s[i], s[j]);
                if(s > kq) kq = s;
                quaylui(k-1);
                swap(s[i], s[j]);
            }
        }
    }
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> k >> s;
        kq = s;
        quaylui(k);
        cout << kq << endl;
    }
}