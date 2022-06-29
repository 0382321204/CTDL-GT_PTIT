#include<bits/stdc++.h>
using namespace std;

void Processing(int n){
    int dem = 0;
    vector <string> myVector;
    queue <string> myQueue;

    myQueue.push("6");
    myQueue.push("8");
    while(1){
        string ans = myQueue.front(); myQueue.pop();
        if(ans.length() > n) break;
        dem++;
        myVector.push_back(ans);
        myQueue.push(ans + "6");
        myQueue.push(ans + "8");
    }
    cout << dem << endl;
    for(int i = 0; i < myVector.size(); i++) cout << myVector[i] << " ";
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