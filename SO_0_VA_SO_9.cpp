#include<bits/stdc++.h>
using namespace std;

int Processing(int n){
    queue <int> myQueue;
    myQueue.push(9);
    while(1){
        int x = myQueue.front(); myQueue.pop();
        if(x % n == 0) return x;
        myQueue.push(x * 10);
        myQueue.push(x * 10 + 9);
    }
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << Processing(n) << endl;
    }
}