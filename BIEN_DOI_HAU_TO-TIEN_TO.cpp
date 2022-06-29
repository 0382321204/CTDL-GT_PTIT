#include<bits/stdc++.h>
using namespace std;

void Processing(string s){
    stack <string> myStack;
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])) myStack.push(string(1, s[i]));
        else {
            string a = myStack.top(); myStack.pop();
            string b = myStack.top(); myStack.pop();
            string ans = s[i] + b + a;
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
    return 0;
}