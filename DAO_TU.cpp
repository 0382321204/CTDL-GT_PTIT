#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        stack <string> myStack;
        string s; getline(cin, s);

        stringstream geek(s);
        string ans;
        while(geek >> ans) myStack.push(ans);
        while(myStack.empty() == false){
            cout << myStack.top() << " ";
            myStack.pop();
        }
        cout << endl;
    }
    return 0;
}