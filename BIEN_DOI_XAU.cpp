#include<bits/stdc++.h>
using namespace std;

int tinh(string s1, string s2){
    int C[105][105] = {0}, i, j;
    int n = s1.length(), m = s2.length();
    for(i = 0; i <= n; i++) C[i][0] = i;
    for(i = 0; i <= m; i++) C[0][i] = i;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            if(s1[i-1] == s2[j-1])
                C[i][j] = C[i-1][j-1];
            else
                C[i][j] = min(C[i-1][j-1], min(C[i-1][j], C[i][j-1])) + 1;
        }
    }
    return C[n][m];
}
main(){
    int t; string s1, s2;
    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        cout << tinh(s1, s2) << endl;
    }
}