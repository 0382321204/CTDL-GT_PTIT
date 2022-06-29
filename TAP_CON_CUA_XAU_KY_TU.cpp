#include <bits/stdc++.h>
using namespace std;

char s[100];
int a[100];
vector <string> myVector;

void khoitao(int k){
    for(int i = 0; i <= k; i++) a[i] = 0;
}

void xuly(int k){
    string ans = "";
    for(int i = 1; i <= k; i++){
        ans = ans + s[a[i]];
    }
    myVector.push_back(ans);
}
void SinhTH(int i, int n, int k){
    for(int j = a[i-1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if(i == k) xuly(k);
        else SinhTH(i+1, n, k);
    }
}
main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        for(int i = 1; i <= n; i++) cin >> s[i];
        sort(s+1, s+n+1);

        for(int i = 1; i <= n; i++){
            khoitao(i);
            SinhTH(1, n, i);
        }

        sort(myVector.begin(), myVector.end());
        for(int i = 0; i < myVector.size(); i++){
            cout << myVector[i] << " ";
        }

        myVector.clear();
        cout << endl;
    }
    return 0;
}