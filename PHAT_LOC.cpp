#include<bits/stdc++.h>
using namespace std;

int n, A[20];
vector <string> myVector;

bool check(){
    if(A[1] == 1) {
        //cout << "ERROR 1" << endl;
        return false;
    }
    if(A[n-2]==0 && A[n-1]==0 && A[n]==0) {
        //cout << "ERROR 2" << endl;
        return false;
    }

    for(int i = 1; i <= n; i++){
        if(i > 1 && A[i] == 1){
            if(A[i+1] == 1) {
                //cout << "ERROR 3" << endl;
                return false;
            }
        } else if(i <= n-3){
            if(A[i+1]==0 && A[i+2]==0 && A[i+3]==0){ 
                //cout << "i = " << i << endl;
                //cout << "ERROR 4" << endl;
                return false;
            }
        }
    }
    return true;
}

void xuat(){
    for(int i = 1; i <= n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

void SinhNP(int i){ 
	for(int j = 0; j <= 1; j++){ 
		A[i] = j; 
		if(i == n){
            if(check()){
                //xuat();
                string ans = "8";
                for(int k = 1; k <= n; k++){
                    if(A[k] == 0) ans += "6";
                    else ans += "8";
                }
                ans += "6";
                myVector.push_back(ans);
            }
        } 
		else SinhNP(i + 1); 
	}
}

main(){
    cin >> n;
    n = n - 2;

    SinhNP(1);

    sort(myVector.begin(), myVector.end());

    for(int i = 0; i < myVector.size(); i++){
        cout << myVector[i] << endl;
    }
}