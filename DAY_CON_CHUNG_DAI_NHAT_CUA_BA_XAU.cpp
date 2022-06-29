#include<bits/stdc++.h>
using namespace std;

int f[105][105][105];
int Processing(string s1, string s2, string s3){
    memset(f, 0, sizeof(f));
    int d1 = s1.size(), d2 = s2.size(), d3 = s3.size();
    for(int i = 1; i <= d1; i++){
        for(int j = 1; j <= d2; j++){
            for(int k = 1; k <= d3; k++){
                if(s1[i-1] == s2[j-1] && s2[j-1] == s3[k-1])
                    f[i][j][k] = f[i-1][j-1][k-1] + 1;
                else f[i][j][k] = max(f[i-1][j][k], max(f[i][j-1][k], f[i][j][k-1]));
            }
        }
    }
    return f[d1][d2][d3];
}
main(){
    int t; cin >> t;
    while(t--){
        int x, y, z; cin >> x >> y >> z;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        cout << Processing(s1, s2, s3) << endl;
    }
}