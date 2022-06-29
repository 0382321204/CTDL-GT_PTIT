#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    queue <int> myQueue;
    cin.ignore();
    while(t--){
        string s; cin >> s;
        if(s == "PUSH"){
            int x; cin >> x;
            myQueue.push(x);
        } else if(s == "POP"){
            if(!myQueue.empty()) myQueue.pop();
        } else if(s == "PRINTFRONT"){
            if(!myQueue.empty()) cout << myQueue.front() << endl;
            else cout << "NONE" << endl;
        }
    }
}