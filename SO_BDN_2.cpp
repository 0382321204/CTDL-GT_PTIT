#include<bits/stdc++.h>
using namespace std;

long long Processing(long long n){
    queue <long long> myQueue;
    myQueue.push(1);
    while(1){
        long long x = myQueue.front(); myQueue.pop();
        if(x % n == 0) return x;
        myQueue.push(x * 10);
        myQueue.push(x * 10 + 1);
    }
}
main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        cout << Processing(n) << endl;
    }
}