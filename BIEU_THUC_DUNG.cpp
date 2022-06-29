#include<bits/stdc++.h>
using namespace std;

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
    	string s; cin >> s;
    	stack <char> st;
    	int dem = 0;
    	for(int i = 0; i < s.size();i++){
    		if(s[i] =='[') st.push(s[i]);
    		else{
    			if(!st.empty()) st.pop();
    			else{
    				int j;
    				for(j = i + 1; j == 0 || j < s.size(); j++){
    					if(s[j] =='['){
    						break;
						}
					}
					while(i < j){
						dem++; 
                        swap(s[j], s[j-1]);
						j--;
					}
					i = i + 1;
				}
			}
		}
		cout << dem << endl;
    }
}