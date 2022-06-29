#include<bits/stdc++.h>
using namespace std;

vector <string> B;
void xuat(vector <int> A){
    string s = "";
    s = s + "[";
    for(int i = 0; i < A.size(); i++){
        s = s + to_string(A[i]);
        if(i < A.size()-1) s = s + " ";
    }
    s = s + "]";
    B.push_back(s);
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

        for(int i = B.size()-1; i >= 0; i--){
            cout << B[i] << " ";
        }
        cout << endl;
        B.clear();
    }
    return 0;
}