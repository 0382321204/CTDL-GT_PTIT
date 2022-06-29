#include <bits/stdc++.h>
using namespace std;

int tinh(string s) {
    int n = s.size(), i, f[50] = {0};
    if (s[0] == '0') return 0;
    f[0] = 1;
    f[1] = 1;
    for (i = 2; i <= n; i++){
        if (s[i - 1] != '0') f[i] = f[i - 1];
        if (s[i - 2] == '1' || s[i - 2] == '2' && s[i - 1] < '7')
            f[i] = f[i] + f[i - 2];
    }
    return f[n];
}
main(){
    int t; cin >> t;
    string s; 
    while (t--){
        cin >> s;
        cout << tinh(s);
        cout << endl;
    }
}
