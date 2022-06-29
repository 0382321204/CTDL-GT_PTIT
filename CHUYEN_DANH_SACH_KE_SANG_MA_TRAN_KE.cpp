#include<bits/stdc++.h>
using namespace std;

int matran[1005][1005];
main(){
    int n, num; cin >> n;
    cin.ignore();

    memset(matran, 0, sizeof(matran));
    for(int i = 1; i <= n; i++){
        string s; getline(cin, s);
        stringstream ss(s);
        while(ss >> num){
            if(num > i){
                matran[i][num] = matran[num][i] = 1;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << matran[i][j] << " ";
        }
        cout << endl;
    }
}