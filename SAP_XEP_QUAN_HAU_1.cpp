#include<bits/stdc++.h>
using namespace std;

int n, dem;
int cot[20], nguoc[20], xuoi[20];

void khoitao(){
	dem = 0;
	for(int i = 1; i <= 20; i++){
        cot[i] = nguoc[i] = xuoi[i] = false;
    }
}
void quaylui(int i){
    for(int j = 1; j <= n; j++){
        if(!cot[j] && !nguoc[i+j-1] && !xuoi[i-j+n]){
            cot[j] = nguoc[i+j-1] = xuoi[i-j+n] = true;
			if(i == n) dem++;
       	 	quaylui(i+1);
        	cot[j] = nguoc[i+j-1] = xuoi[i-j+n] = false;
        }
    }
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
		khoitao();
        quaylui(1);
        cout << dem << endl;
    }
}