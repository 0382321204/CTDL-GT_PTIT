#include<bits/stdc++.h>
using namespace std;

int n, answer, a[10];
int cot[100], nguoc[100], xuoi[100], giatri[10][10];

void khoitao(){
    answer = 0;
    n = 8;
    for(int i = 1; i <= 8; i++){
        for(int j = 1; j <= 8; j++){
            cin >> giatri[i][j];
        }
    }
	for(int i = 1; i <= 100; i++){
        cot[i] = nguoc[i] = xuoi[i] = false;
    }
}
void quaylui(int i){
    for(int j = 1; j <= n; j++){
        a[i] = j;
        if(!cot[j] && !nguoc[i+j-1] && !xuoi[i-j+n]){
            cot[j] = nguoc[i+j-1] = xuoi[i-j+n] = true;
			if(i == 8){
                int tong = 0;
                for(int k = 1; k <= n; k++){
                    tong = tong + giatri[k][a[k]];
                }
                answer = max(answer, tong);
            }
       	 	quaylui(i+1);
        	cot[j] = nguoc[i+j-1] = xuoi[i-j+n] = false;
        }
    }
}
main(){
    int t; cin >> t;
    while(t--){
		khoitao();
        quaylui(1);
        cout << answer << endl;
    }
}