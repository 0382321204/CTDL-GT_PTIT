#include<bits/stdc++.h>
using namespace std;

vector <int> myVector;

void output(int n){
    for(int i = 1; i <= n; i++) cout << myVector[i];
    cout << endl;
}
void khoitao(int n){
    myVector.clear();
    myVector.push_back(-1);
    for(int i = 1; i <= n; i++) myVector.push_back(i);
}
bool check(int n){
    for(int i = 2; i <= n; i++){
        if(abs(myVector[i - 1]-myVector[i]) == 1) 
            return false;
    }
    return true;

}
void xuly(int n){
    if(check(n) == true) output(n);
    while(next_permutation(myVector.begin() + 1, myVector.end())){
        if(check(n) == true) output(n);
    }
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        khoitao(n);
        xuly(n);
    }
    return 0;
}