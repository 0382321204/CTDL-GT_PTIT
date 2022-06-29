#include<bits/stdc++.h>
using namespace std;

void xuat(vector <int> A){
    cout << "[";
    for(int i = 0; i < A.size(); i++){
        cout << A[i];
        if(i < A.size()-1) cout << " ";
    }
    cout << "]" << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> A;

        for(int i = 0; i < n; i++){
            int x; cin >> x;
            A.push_back(x);
        }

        while(A.size() > 0){
            vector <int> temp;
            if(A.size() > 0) xuat(A);
            for(int i = 0; i < A.size()-1; i++){
                temp.push_back(A[i] + A[i+1]);
            }
            A.swap(temp);
        }
    }
    return 0;
}