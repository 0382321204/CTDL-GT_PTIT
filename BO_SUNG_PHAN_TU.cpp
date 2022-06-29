#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map <int,int> myMap;

        int min = 9999, max = -9999;
        for(int i = 0; i < n; i++){
            int ans; cin >> ans;
            if(ans < min) min = ans;
            if(ans > max) max = ans;
            myMap[ans]++;
        }

        int dem = 0;
        for(int i = min; i <= max; i++){
            if(myMap[i]==0) dem++;
        }
        cout << dem << endl;
    }
    return 0;
}