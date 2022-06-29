#include<bits/stdc++.h>
using namespace std; 

int n, k;
void xuat(int A[]){
    int dem = 0;
	for(int i = 1; i <= n; i++){
        if(A[i] == 1) dem++;
    }
    if(dem == k){
        for(int i = 1; i <=n; i++){
            cout << A[i];
        }
        cout << endl;
    }
} 
void sinh(int i, int A[]){ 
	for(int j = 0; j <= 1; j++){ 
		A[i] = j; 
		if(i == n) xuat(A); 
		else sinh(i + 1, A); 
	}
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        int A[n + 5];
        sinh(1, A);
    }
    return 0;
}