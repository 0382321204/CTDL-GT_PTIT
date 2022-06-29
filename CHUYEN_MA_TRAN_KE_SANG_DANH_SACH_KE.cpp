#include<bits/stdc++.h>
using namespace std;

int matran[1005][1005];
vector <int> dsKe[1005];
main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> matran[i][j];
            if(matran[i][j] == 1){
                dsKe[i].push_back(j);
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(auto os: dsKe[i]){
            cout << os << " ";
        }
        cout << endl;
    }
}