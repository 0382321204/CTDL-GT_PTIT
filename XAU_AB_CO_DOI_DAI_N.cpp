#include<bits/stdc++.h>
using namespace std; 

void xuat(int n, int A[]){ 
	for(int i = 1; i <= n; i++){
        if(A[i] == 0) cout << "A";
        else cout << "B";
    }
    cout << " ";
} 
void sinh(int i, int n, int A[]){ 
	for(int j = 0; j <= 1; j++){ 
		A[i] = j; 
		if(i == n) xuat(n, A); 
		else sinh(i + 1, n, A); 
	}
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int A[n + 5];
        sinh(1, n, A);
        cout << endl;
    }
    return 0;
}