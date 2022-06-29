#include<bits/stdc++.h>
using namespace std;

void Processing(int n){
    stack <string> myStack;
    queue <string> myQueue;

    myQueue.push("6");
    myQueue.push("8");
    while(1){
        string ans = myQueue.front(); myQueue.pop();
        if(ans.length() > n) break;
        myStack.push(ans);
        myQueue.push(ans + "6");
        myQueue.push(ans + "8");
    }
    while(myStack.empty() == false){
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        Processing(n);
    }
    return 0;
}