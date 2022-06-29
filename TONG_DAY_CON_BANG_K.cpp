#include<bits/stdc++.h>
using namespace std; 

int n, k, dem = 0;
int A[100], B[100]; 
void xuat(){
    int tong = 0; 
	for(int i = 1; i <= n; i++){
        if(A[i] == 1) tong = tong + B[i];
    }
    //cout << "tong = " << tong << endl;
    if(tong == k){
        dem++;
        for(int i = 1; i <= n; i++){
            if(A[i] == 1){
                cout << B[i] << " ";
            }
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
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> B[i];
    sinh(1);
    cout << dem;
    return 0;
}