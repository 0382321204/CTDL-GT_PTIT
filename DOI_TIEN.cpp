#include<bits/stdc++.h>
using namespace std;

int menhgia[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

main(){
    int t; cin >> t;
    while(t--){
        int sotien, dem = 0; 
        cin >> sotien;
        while(sotien > 0){
            for(int i = 0; i < 10; i++){
                int soTotien = sotien / menhgia[i];
                if(soTotien != 0) dem = dem + soTotien;
                sotien = sotien - soTotien * menhgia[i];
            }
        }
        cout << dem << endl;
    }
    return 0;
}