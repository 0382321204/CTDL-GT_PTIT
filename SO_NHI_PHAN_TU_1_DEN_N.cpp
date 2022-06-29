#include<bits/stdc++.h>
using namespace std;

void xuly(int n){
    queue <long long> myQueue;
    myQueue.push(1);
    while(n--){
        long long x = myQueue.front(); myQueue.pop();
        cout << x << " ";
        myQueue.push(x * 10);
        myQueue.push(x * 10 + 1);
    }
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        xuly(n);
        cout << endl;
    }
}