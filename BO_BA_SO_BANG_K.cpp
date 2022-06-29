#include<bits/stdc++.h>
using namespace std;

long long n, k;
vector <long long> myVector;

string Triple_of_K(){
    sort(myVector.begin(), myVector.end());
    for(int c = myVector.size() - 1; c >= 2; c--){
        int a = 0, b = c - 1;
        while(a < b){
            if(myVector[a] + myVector[b] == k - myVector[c]) return "YES";
            else if(myVector[a] + myVector[b] < myVector[c]) a++;
            else b--;
        }
    }
    return "NO";
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            long long ans; cin >> ans;
            myVector.push_back(ans);
        }
        cout << Triple_of_K() << endl;
        myVector.clear();
    }

    return 0;
}