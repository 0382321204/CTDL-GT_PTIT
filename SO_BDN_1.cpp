#include<bits/stdc++.h>
using namespace std;

int Processing(long long n){
    int dem = 0;
    queue <long long> myQueue;
    myQueue.push(1);
    while(1){
        long long x = myQueue.front(); myQueue.pop();
        if(x > n) return dem;
        myQueue.push(x * 10);
        myQueue.push(x * 10 + 1);
        dem++;
    }
}
main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        cout << Processing(n) << endl;
    }
}