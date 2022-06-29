#include<bits/stdc++.h>
using namespace std;

void tinh(string s){
    int n = s.length(), kq = 0;
    stack <int> st;
    st.push(-1);
    for(int i = 0; i < n; i++){
        if(s[i] == '(') {
            //cout << "add: " << i << endl;
            st.push(i);
        }
        else {
            //cout << "Pop: " << st.top() << endl;
            st.pop();
            if(!st.empty()){
                kq = max(kq, i - st.top());
                cout << kq << " ";
                cout << "max = " << i << " - " << st.top() << " = " << i - st.top() << endl; 
            } else {
                st.push(i);
                //cout << "Push: " << i << endl;
            }
        }
    }
}
main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        tinh(s);
    }
}