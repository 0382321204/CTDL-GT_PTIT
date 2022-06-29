#include<bits/stdc++.h>

using namespace std;

int main() {
	int test;
	cin >> test;
	while(test--){
		string str;
		cin >> str;
		stack<char> stk;
		stack<string> res;
		for(int i = 0; i < str.length(); i++){
			stk.push(str[i]);
		}
		while(!stk.empty()){
			char a = stk.top();
			stk.pop();
            //cout << "POP->stk: " << a << endl;
			if(isalpha(a)){
                //cout << "True !" << endl;
				string s;
				s.push_back(a);
                //cout << "Push_back->s: " << a << endl;
				res.push(s);
                //cout << "Push->res: " << s << endl;
			}
			else{
                //cout << "Fail !" << endl;
				string s1 = res.top();
                //cout << "Top->res: " << s1 << endl;
				res.pop();
                //cout << "Pop->res" << endl;
				s1 += res.top() + a;
                //cout << "s1 = " << s1 << endl;
				res.pop();
				res.push(s1);
                //cout << "Push->res: " << s1 << endl;
			}
		}
		cout << res.top() << endl;
	}
	return 0;
}