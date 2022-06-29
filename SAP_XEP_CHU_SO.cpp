#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string ans;
        
        map <char, int> myMap;

        for(int i = 0; i < n; i++){
            cin >> ans;
            //cout << "ans = " << ans << endl;
            for(int j = 0; j < ans.size(); j++){
                myMap[ans[j]]++;
            }
        }

        for(auto &os: myMap){
            cout << os.first << " ";
        }

        cout << endl;
    }
    return 0;
}