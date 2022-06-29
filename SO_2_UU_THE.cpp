#include<bits/stdc++.h>
using namespace std;

bool kiemtra(string s){
    int dem = count(s.begin(), s.end(), '2');
    if(dem > s.size() / 2){
        cout << s << " ";
        return true;
    }
    else return false;
}
main(){
    int t; cin >> t;
    while(t--){
        int n, dem = 0; 
        cin >> n;

        queue <string> q;
        q.push("1");
        q.push("2");

        while(1){
            string s = q.front(); q.pop();
            if(kiemtra(s)) dem++;
            if(dem == n) break;
            q.push(s + "0");
            q.push(s + "1");
            q.push(s + "2");
        }
        cout << endl; 
    }
}