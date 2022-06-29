#include<bits/stdc++.h>
using namespace std;

int Processing(string s){
    stack <char> myStack;
    int dem = 0, n = s.length();
    for(int i = 0; i < n; i++){
        if(s[i] == '(') myStack.push('(');
        else {
            if(myStack.empty() == false) myStack.pop();
            else {
                myStack.push('(');
                dem++;
            }
        }
    }
    return dem + myStack.size()/2;
}
main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        cout << Processing(s) << endl;
    }
}