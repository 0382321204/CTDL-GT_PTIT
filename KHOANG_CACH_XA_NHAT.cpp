#include <bits/stdc++.h>
using namespace std;

int a[100005], b[100005], n;

main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) b[i] = *max_element(a + i, a + n + 1);
        //for(int i = 1; i <= n; i++) cout << b[i] << " ";
        //cout << endl;
        int i = 1, j = 1, MAX = -1;
        while(i <= n && j <= n){
            if(b[j] > a[i]){
                MAX = max(MAX, j - i);
                j++;
            } else i++;
        }
        cout << MAX << endl;
    }
}

