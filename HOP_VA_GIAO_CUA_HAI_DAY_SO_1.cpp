#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        map <int,int> myMap;

        for(int i = 0; i < n; i++){
            int ans; cin >> ans;
            myMap[ans] = 1;
        }

        for(int i = 0; i < m; i++){
            int ans; cin >> ans;
            if(myMap[ans] == 1) myMap[ans] = 2;
            else myMap[ans] = 1;
        }

        for(auto &os : myMap){
            cout << os.first << " ";
        }

        cout << endl;

        for(auto &os : myMap){
            if(os.second > 1){
                cout << os.first << " ";
            }
        }

        cout << endl;
    }
    return 0;
}