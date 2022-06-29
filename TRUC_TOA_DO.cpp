#include<bits/stdc++.h>
using namespace std;

struct Line {
    int start, end;
};
Line ds[100005];

bool compare(Line A, Line B){
    return A.end < B.end;
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0; i < n; i++) cin >> ds[i].start >> ds[i].end;
        sort(ds, ds + n, compare);

        int dem = 1;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(ds[i].end <= ds[j].start) {
                    dem++;
                    i = j;
                }
            }
        }

        cout << dem << endl;
    }
}