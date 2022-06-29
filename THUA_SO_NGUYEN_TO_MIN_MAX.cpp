#include<bits/stdc++.h>
using namespace std;
// EXCEL

int MaxThuaso(int n){
	int res;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			res = i;
			n = n / i;
		}
	}
	if(n != 1) res = n;
	return res;
}
int MinThuaso[1000000];
void GetMinThuaSo(){
	for(int i = 1; i <= 1000000; i++) MinThuaso[i] = i;
	for(int i = 2; i <= sqrt(1000000); i++){
		if(MinThuaso[i] == i){
			for(int j = i + i; j <= 1000000; j = j + i){
				if(MinThuaso[j] == j) MinThuaso[j] = i;
			}
		}
	}
}
main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n = 20;
	GetMinThuaSo();
	
	cout << "NUM: ";
	for(int i = 2; i <= n; i++) cout << i << " ";
	cout << endl;
	
	cout << "MAX: ";
	for(int i = 2; i <= n; i++) cout << MaxThuaso(i) << " ";
	cout << endl;
	
	cout << "MIN: ";
	for(int i = 2; i <= n; i++) cout << MinThuaso[i] << " ";
	cout << endl;
}