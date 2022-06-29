#include<iostream>
using namespace std;

void khoiteo(int a[], int k){
    for(int i = 0; i < k; i++){
        a[i] = 0;
    }
}
void xuat(int a[], int k){
    for(int i = 1; i <= k; i++){
        char ans = a[i] + 16 + '0';
        cout << ans;
    }
    cout << endl;
}
void SinhTH(int i, int a[], int n, int k){
    for(int j = a[i-1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if(i == k) xuat(a, k);
        else SinhTH(i+1, a, n, k);
    }
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
    	cin >> n >> k;
        int a[k+5];

        khoiteo(a, k);
    	SinhTH(1, a, n, k);
	}
	return 0;
}