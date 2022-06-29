#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int k; string s;
        cin >> k >> s;

        map <char, int> temp;
        for(int i = 0; i < s.size(); i++) temp[s[i]]++;
        
        priority_queue <int, vector<int>> q;
        for(auto os:temp){
            q.push(os.second);
        }

        while(k > 0 && q.empty() == false){
            k--;
            int ans = q.top(); q.pop();
            q.push(ans - 1);
        }
        
        long long min = 0;
        while(!q.empty()){
            min = min + q.top() * q.top();
            q.pop();
        }
        
        cout << min << endl;
    }
}