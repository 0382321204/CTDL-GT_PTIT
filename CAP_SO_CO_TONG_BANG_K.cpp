#include<bits/stdc++.h>
using namespace std;

long long n, k, dem;
vector <long long> myVector;

int Couple_of_K(){
    sort(myVector.begin(), myVector.end());
    dem = 0;

    for(int i = n - 1; i >= 1; i--){
        int right = i, left = 0;
        while(left < right){
            if(myVector[left] + myVector[right] <= k){
                if(myVector[left] + myVector[right] == k) dem++;
                left++;
            } else break;
        }
    }

    return dem;
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            long long ans; cin >> ans;
            myVector.push_back(ans);
        }
        cout << Couple_of_K() << endl;
        myVector.clear();
    }

    return 0;
}