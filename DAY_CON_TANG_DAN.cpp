#include<bits/stdc++.h>
using namespace std;

int n, a[21], b[21];
vector <string> myVector;

void khoitao(int k){
    for(int i = 0; i <= k; i++) a[i] = 0;
}
bool kiemtra(int k){
    for(int i = 1; i <= k-1; i++){
        if(b[a[i]] > b[a[i+1]]) return false;
    }
    return true;
}
void xuly(int k){
    string ans = "";
    for(int i = 1; i <= k; i++){
        ans = ans + to_string(b[a[i]]);
        if(i < k) ans = ans + " ";
    }
    myVector.push_back(ans);
}
void quaylui(int i, int k){
    for(int j = a[i - 1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if(i == k){
            if(kiemtra(k)) xuly(k);
        }
        else quaylui(i + 1, k);
    }
}
main(){
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> b[i];
    for(int i = 2; i <= n - 1; i++){
        khoitao(i);
        quaylui(1, i);
    }
    sort(myVector.begin(), myVector.end());
    for(int i = 0; i < myVector.size(); i++){
        cout << myVector[i] << endl;
    }
    myVector.clear();
}