#include<iostream>
using namespace std;

int a[100] = {0};

void xuat(int a[], int k){
    for(int i = 1; i <= k; i++)
        cout << a[i];
    cout << " ";
}
void SinhTH(int i, int a[], int n, int k){
    for(int j = a[i-1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if(i == k) xuat(a, k);
        else SinhTH(i+1, a, n , k);
    }
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
    	cin >> n >> k;
    	SinhTH(1, a, n, k);
    	cout << endl;	
	}
	return 0;
}