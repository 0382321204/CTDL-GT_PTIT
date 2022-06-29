#include<bits/stdc++.h>
using namespace std;

void Processing(){
    int n; cin >> n;
    queue <int> myQueue;
    while(n--){
        int x; cin >> x;
        if(x == 1) cout << myQueue.size() << endl;
        else if(x == 2) {
            if(myQueue.empty()) cout << "YES" << endl;
            else cout << "NO" << endl;
        } else if(x == 3){
            int ans; cin >> ans;
            myQueue.push(ans);
        } else if(x == 4){
            if(!myQueue.empty()) myQueue.pop();
        } else if(x == 5){
            if(!myQueue.empty()) cout << myQueue.front() << endl;
            else cout << -1 << endl;
        } else if(x == 6){
            if(!myQueue.empty()) cout << myQueue.back() << endl;
            else cout << -1 << endl;
        }
    }
}
main(){
    int t; cin >> t;
    while(t--){
        Processing();
    }
    return 0;
}