#include<bits/stdc++.h>
using namespace std;

int a[100] = {0};
vector <int> myVector;

bool check(vector <int> myVector, int ans){
    for(int i = 0; i < myVector.size(); i++){
        if(myVector[i] == ans) return false;
    }
    return true;
}

void xuat(int k){
    for(int i = 1; i <= k; i++){
        cout << myVector[a[i]-1] << " ";
    }
    cout << endl;
}

void SinhTH(int i, int n, int k){
    for(int j = a[i-1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if(i == k) xuat(k);
        else SinhTH(i+1, n, k);
    }
}

main(){
    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int ans; cin >> ans;
        if(check(myVector, ans)){
            myVector.push_back(ans);
        }
    }

    sort(myVector.begin(), myVector.end());

    SinhTH(1, myVector.size(), k);
}