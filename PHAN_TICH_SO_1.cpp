#include<bits/stdc++.h>
using namespace std;
int a[50], n;
void in(int m){
    cout << "(";
    for(int i = 1; i < m; i++) cout << a[i] << " ";
    cout << a[m] << ") ";
}
/* void xuly(int ans, int i, int s){
    for(int j = ans; j >= 1; j--){
        a[i] = j;
        if(j == s) in(i);
        else if(j < s){
            xuly(j, i+1, s-j);
        }
    }
} */
void Phantich(int start, int i, int sum){
    if(sum > n) return;
    for(int j = start; j >= 1; j--){
        a[i] = j;
        int new_sum = sum + j;
        if(new_sum == n) in(i);
        Phantich(j, i + 1, new_sum);
    }
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        //xuly(n, 1, n);
        Phantich(n, 1, 0);
        cout << endl;
    }
    return 0;
}