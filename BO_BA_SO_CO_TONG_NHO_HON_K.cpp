#include<bits/stdc++.h>
using namespace std;

long long n, K, dem;
vector <long long> myVector;

long long Triple_less_K(){
    dem = 0;
    sort(myVector.begin(), myVector.end());
    for(int i = 0; i < n - 2; i++){
        int j = i + 1, k = n - 1;
        while(j < k){
            if(myVector[j] + myVector[k] >= K - myVector[i]) k--;
            else {
                dem = dem + (k - j);
                j++;
            }
        }
    }
    return dem;
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> K;
        for(int i = 0; i < n; i++){
            long long ans; cin >> ans;
            myVector.push_back(ans);
        }
        cout << Triple_less_K() << endl;
        myVector.clear();
    }
    return 0;
}