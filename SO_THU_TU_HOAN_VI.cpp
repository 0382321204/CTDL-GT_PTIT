#include<bits/stdc++.h>
using namespace std;

vector<int> A;
vector<int> B;

bool check(int n){
    for(int i = 0; i < n; i++){
        if(A[i] != B[i]) return false;
    }
    return true;
}

main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        for(int i = 0; i < n; i++){
            int ans; cin >> ans;
            A.push_back(ans);
            B.push_back(i+1);
        }

        int dem = 1;
        if(check(n)) cout << dem << endl;
        else {
            while(next_permutation(B.begin(), B.end())){
                dem++;
                if(check(n)) break;
            }
            cout << dem << endl;
        }

        A.clear();
        B.clear();
    }
    return 0;
}