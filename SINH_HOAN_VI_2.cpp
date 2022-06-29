#include<bits/stdc++.h>
using namespace std;

int n, a[20], check[20];

void xuly(){
	for(int i = 1; i <= n; i++) check[i] = 0;
}
void xuat(){
	for(int i = 1; i <= n; i++)
		cout << a[i];
	cout << " ";
}
void SinhHV(int i){
	for(int j = 1; j <= n; j++){
		if(check[j] == 0){
			check[j] = 1;
			a[i] = j;
			if(i == n) xuat();
			else SinhHV(i + 1);
			check[j] = 0;
		}
	}
}
int main(){
	cin >> n;
	xuly();
	SinhHV(1);
}