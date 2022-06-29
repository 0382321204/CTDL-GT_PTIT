#include<bits/stdc++.h>
using namespace std;

bool check[10000];

void Eratosthenes(int n){
	for(int i = 2; i <= 10000; i++) check[i] = true;
	
	for(int i = 2; i <= sqrt(n); i++){
		if(check[i] == true){
			for(int j = i + i; j <= n; j = j + i)
				check[j] = false;
		}
	}
}
int main(){
	int t, m ,n;
	cin >> t;
	Eratosthenes(10000);
}
