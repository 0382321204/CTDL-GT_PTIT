#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        
        int i = s.size()-1;
        while(i > 0 && s[i]=='1') i--;
        if(i > 0){
            s[i] = s[i] + 1;
            for(int j = i + 1; j < s.size(); j++){
                s[j] = s[j] - 1;
            }
        } else {
            for(int i = 0; i < s.size(); i++){
                s[i] = s[i] - 1;
            }
        }
        
        cout << s << endl;
    }
}