#include<bits/stdc++.h>
using namespace std;

int a[50];
int n, k;
vector <string> myVector;

bool kiemtra(){
    int i, j;
    int dem = 0;
    for(i = 1; i <= n; i++){
        if(a[i] == 0){
            int count = 1;
            for(j = i + 1; j <= n; j++){
                if(a[j] == 0) count++;
                else{
                    break;
                }
            }
            i = j;
            if(count == k) dem++;
        }
    }
    if(dem == 1) return true;
    else return false;
}
void xuly(){
    string ans = "";
    for(int i = 1; i <= n; i++){
        if(a[i] == 0) ans = ans + "A";
        else ans = ans + "B";
    }
    myVector.push_back(ans);
}
void SinhNP(int i, int n){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n){
            if(kiemtra()){
                xuly();
            }
        }
        else SinhNP(i+1, n);
    }
}
main(){
    cin >> n >> k;
    SinhNP(1, n);

    cout << myVector.size() << endl;
    for(int i = 0; i < myVector.size(); i++){
        cout << myVector[i] << endl;
    }
}