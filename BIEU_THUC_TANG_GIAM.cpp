#include<bits/stdc++.h>
using namespace std;
int main (){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
        stack <int> myStack;

        int n = s.length();
        for(int i = 0; i <= n; i++){
            if(s[i] == 'I' || i == n){
                cout << i + 1;
                while(myStack.empty() == false){
                    cout << myStack.top();
                    myStack.pop();
                }
            } else myStack.push(i + 1);
        }
        cout << endl;
	}
}
