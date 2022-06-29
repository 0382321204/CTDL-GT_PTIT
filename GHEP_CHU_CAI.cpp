#include<bits/stdc++.h>
using namespace std;
vector <char> myVector; 
void output(){
    for(int i = 1; i < myVector.size(); i++) cout << myVector[i];
    cout << endl;
}
void khoitao(char c){
    myVector.clear();
    myVector.push_back('Z');
    for(char i = 'A'; i <= c; i++) myVector.push_back(i);
}
bool check(){
    for(int i = 1; i < myVector.size() - 1; i++){
        if(i > 1){
            if(myVector[i] == 'A' || myVector[i] == 'E'){
                if(myVector[i - 1] != 'A' && myVector[i - 1] != 'E'){
                    if(myVector[i + 1] != 'A' && myVector[i + 1] != 'E'){
                        return false;
                    }
                }
            }
        } 
    }
    return true;
}
main(){
    char c; cin >> c; 
    khoitao(c);
    if(check()) output();
    while(next_permutation(myVector.begin() + 1, myVector.end())){
        if(check()) output();
    }
}