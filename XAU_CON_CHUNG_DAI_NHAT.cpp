#include<bits/stdc++.h>
using namespace std;

int C[1005][1005];
int Quyhoachdong(string s1, string s2){
    memset(C, 0, sizeof(C));
    int n = s1.size(), m = s2.size();
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(s1[i-1] == s2[j-1]) C[i][j] = C[i-1][j-1] + 1;
            else C[i][j] = max(C[i-1][j], C[i][j-1]);
        }
    }
    return C[n][m];
}
main(){
    int t; cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        cout << Quyhoachdong(s1, s2) << endl;
    }
}