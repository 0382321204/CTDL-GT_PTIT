#include<bits/stdc++.h>
using namespace std;

struct Task {
    long long start, finish;
};
Task ds[1005];

bool compare(Task A, Task B){
    return A.finish < B.finish;
}

main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0; i < n; i++) cin >> ds[i].start;
        for(int i = 0; i < n; i++) cin >> ds[i].finish;
        
        sort(ds, ds + n, compare);

        int dem = 1, i = 0;
        for(int j = 1; j < n; j++){
            if(ds[i].finish <= ds[j].start){
                dem++;
                i = j;
            }
        }
        cout << dem << endl;
    }
    return 0;
}