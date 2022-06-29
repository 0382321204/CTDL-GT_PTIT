#include<bits/stdc++.h>
using namespace std;

/* Hãy in ra số nguyên đó. Nếu số đó không tồn tại, hãy in ra NO NUMBER */
int f[1005][1005];
string kq;
int Processing(string s1, string s2){
    memset(f, 0, sizeof(f)); kq = "";
    int n = s1.size(), m = s2.size();
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(s1[i-1] == s2[j-1]) {
                f[i][j] = f[i-1][j-1] + 1;
                kq = kq + s1[i-1];
                //cout << s1[i-1] << endl;
            }
            else {
                f[i][j] = max(f[i-1][j], f[i][j-1]);
                if(f[i-1][j] >= f[i][j-1]) kq = kq + s1[i-1];
                else kq = kq + s2[j-1];
            }
        }
    }
    return f[n][m];
}
main(){
    int t; cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        cout << Processing(s1, s2) << endl;
        cout << kq << endl;
    }
}