#include<bits/stdc++.h>
using namespace std;

int binary[10];
string ans;
vector <string> myVector;

bool kiemtra(){
    ans = "";
    for(int i = 1; i <= 8; i++){
        if(binary[i] == 0) ans = ans + '0';
        else ans  = ans + '2';
    }
    
    if(ans[0] == '0' && ans[1] == '0') return false;
    else if(ans[2] == '0' && ans[3] == '0') return false;
    else if(ans[2] == '2' || ans[4] == '0') return false;
    else return true;
}
void xuly(){
    myVector.push_back(ans);
}
void quaylui(int i){
    for(int j = 0; j <= 1; j++){
        binary[i] = j;
        if(i == 8){
            if(kiemtra()) xuly();
        } else quaylui(i + 1);
    }
}
main(){
    quaylui(1);
    sort(myVector.begin(), myVector.end());
    for(int i = 0; i < myVector.size(); i++){
       cout << myVector[i][0] << myVector[i][1] << '/';
       cout <<  myVector[i][2] << myVector[i][3] << '/';
       cout << myVector[i][4] << myVector[i][5] << myVector[i][6] << myVector[i][7] << endl;
    }
}