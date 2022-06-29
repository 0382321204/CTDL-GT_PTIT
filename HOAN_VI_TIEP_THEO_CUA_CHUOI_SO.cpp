#include <bits/stdc++.h>
using namespace std;

void xuat(vector<int> myVector){
    for(int i = 0; i < myVector.size(); i++){
        cout << myVector[i];
    }
    cout << endl;
}

main(){
    int t; cin >> t;
    while (t--){
        int ans; cin >> ans;
        string s; cin >> s;
        vector <int> myVector;

        for(int i = 0; i < s.size(); i++){
            myVector.push_back(s[i]-'0');
        }

        int check = 0;
        cout << ans << " ";
        while(next_permutation(myVector.begin(), myVector.end())){
            check = 1;
            xuat(myVector);
            break;
        }

        if(check == 0) cout << "BIGGEST" << endl;
    }
    return 0;
}