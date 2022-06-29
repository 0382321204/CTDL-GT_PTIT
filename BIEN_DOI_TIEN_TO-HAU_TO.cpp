#include<bits/stdc++.h>
using namespace std;

void Processing(string s){
    int n = s.length();
    stack <string> myStack;
    for(int i = n-1; i >= 0; i--){
        if(isalpha(s[i])) myStack.push(string(1,s[i]));
        else {
            string s1 = myStack.top(); myStack.pop();
            string s2 = myStack.top(); myStack.pop();
            string ans = s1 + s2 + s[i];
            myStack.push(ans);
        }
    }
    cout << myStack.top() << endl;
}
main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        Processing(s);
    }
}