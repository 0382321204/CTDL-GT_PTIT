#include<bits/stdc++.h>
using namespace std;

vector <pair<int, int>> edge; // Danh sach canh
void Processing(int n){
    for(int i = 1; i <= n; i++){
        string s; getline(cin, s);
        int num;
        stringstream ss(s);
        while(ss >> num){
            if(num > i){
                edge.push_back({i, num});
            }
        }
    }
    for(auto os : edge){
        cout << os.first << " " << os.second << endl;
    }
}
main(){
    int n; cin >> n;
    cin.ignore();
    Processing(n);
    edge.clear();
}