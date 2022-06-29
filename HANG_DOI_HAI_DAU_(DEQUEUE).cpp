#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    deque <int> myQueue;
    cin.ignore();
    while(t--){
        string s; cin >> s;
        if(s == "PUSHBACK"){
            int x; cin >> x;
            myQueue.push_back(x);
        } else if(s == "PUSHFRONT"){
            int x; cin >> x;
            myQueue.push_front(x);
        } else if(s == "POPFRONT"){
            if(!myQueue.empty()) myQueue.pop_front();
        } else if(s == "POPBACK"){
            if(!myQueue.empty()) myQueue.pop_back();
        } else if(s == "PRINTFRONT"){
            if(!myQueue.empty()) cout << myQueue.front() << endl;
            else cout << "NONE" << endl;
        } else if(s == "PRINTBACK"){
            if(!myQueue.empty()) cout << myQueue.back() << endl;
            else cout << "NONE" << endl;
        }
    }
}