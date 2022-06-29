#include<bits/stdc++.h>
using namespace std;

struct Task {
    long long id, time, profit;
};
Task ds[1005];
bool check[1005];
bool compare(Task A, Task B){
    return A.profit > B.profit;
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        memset(check, false, sizeof(check));

        for(int i = 0; i < n; i++){
            cin >> ds[i].id >> ds[i].time >> ds[i].profit;
        }
        sort(ds, ds + n, compare);
        
        int kq = 0, dem = 0;
        for(int i = 0; i < n; i++){
            while(check[ds[i].time]==true && ds[i].time > 0) ds[i].time--;
            if(check[ds[i].time]==false && ds[i].time > 0){
                kq = kq + ds[i].profit;
                dem++;
                check[ds[i].time] = true;
            }
        }
        cout << dem << " " << kq << endl;
    }
    return 0;
}