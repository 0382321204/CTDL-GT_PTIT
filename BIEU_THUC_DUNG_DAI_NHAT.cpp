#include<bits/stdc++.h>
using namespace std;

int xuly(string s){
    int n = s.length(), dem = 0;
    stack <int> st;
    for(int i = 0; i < n; i++){
        if(s[i] == '(') st.push(i);
        else {
            if(!st.empty()){
                dem = dem + 2;
                st.pop();
            } 
        }
    }
    return dem;
}
main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        cout << xuly(s) << endl;
    }
}