#include<bits/stdc++.h>
using namespace std; 

int n;
vector <string> HA;

bool Kiemtra(int A[]){
    if(A[1] == 1) return false;
    if(A[n] == 0) return false; 
	for(int i = 1; i <= n; i++){
        if(A[i] == 0 && A[i+1] == 0) return false;
    }
    return true;
} 
void sinh(int i, int A[]){ 
	for(int j = 0; j <= 1; j++){ 
		A[i] = j; 
		if(i == n){
            if(Kiemtra(A)==true){
                string s = "";
                for(int k = 1; k <= n; k++){
                    if(A[k] == 0) s = s + "H";
                    else s = s + "A";
                }
                HA.push_back(s);
            }
        }
		else sinh(i + 1, A); 
	}
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        int A[n + 5];
        sinh(1, A);
        sort(HA.begin(), HA.end());
        for(int i = 0; i < HA.size(); i++){
            cout << HA[i] << endl;
        }
        HA.clear();
    }
    return 0;
}