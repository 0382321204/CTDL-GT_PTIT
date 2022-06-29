#include<bits/stdc++.h>
using namespace std;
int A[20], n;
bool kt_thuannghich(){
    int dau = 1, cuoi = n;
    while(dau < cuoi){
        if(A[dau] != A[cuoi]) return false;
        dau++;
        cuoi--;
    }
    return true;
}
void xuat(){
    if(kt_thuannghich()){
        for(int i = 1; i <= n; i++){
            cout << A[i] << "       ";
        }
        cout << endl;
    }
}
void sinh(int i){ 
	for(int j = 0; j <= 1; j++){ 
		A[i] = j; 
		if(i == n) xuat(); 
		else sinh(i + 1); 
	}
}
int main(){
    cin >> n;
    sinh(1);
    return 0;
}