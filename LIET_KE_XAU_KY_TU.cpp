#include<bits/stdc++.h>
using namespace std;

char c; int k;

void xuat(string str){
    cout << str << endl;
}
void Try(int i, char ans, string str){
    for(char j = ans; j <= c; j++){
        str.push_back(j);
        if(i == k) xuat(str);
        else Try(i+1, j, str);
        str.pop_back();
    }
}
main(){
    cin >> c >> k;
    string str;
    Try(1, 'A', str);

    return 0;
}