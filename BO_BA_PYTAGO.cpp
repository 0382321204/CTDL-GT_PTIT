#include<bits/stdc++.h>
using namespace std;

vector <long long> myVector;

string Triple_of_Pytago(){
    sort(myVector.begin(), myVector.end());
    for(int c = myVector.size() - 1; c >= 2; c--){
        int a = 0, b = c - 1;
        while(b >= a){
            if(myVector[a] + myVector[b] == myVector[c]) return "YES";
            else if(myVector[a] + myVector[b] < myVector[c]) a++;
            else b--;
        }
    }
    return "NO";
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0; i < n; i++){
            long long ans; cin >> ans;
            myVector.push_back(ans * ans);
        }
        cout << Triple_of_Pytago() << endl;
        myVector.clear();
    }

    return 0;
}