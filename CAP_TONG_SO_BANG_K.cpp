#include <bits/stdc++.h>
using namespace std;
int main(){
 	int t;
 	cin >> t;
 	while(t--){
 		int n;
 		long long k;
 		cin >> n >> k;
 		map <long long,long long> b;
 		long long a[n];
 		long long s = 0;
 		for(int i = 0; i < n; i++){
 			cin >> a[i];
 			b[a[i]]++;
		}

        for(auto &os: b){
            cout << os.first << " " << os.second << endl;
        }
		for(int i = 0; i < n; i++){
			if(b[k-a[i]] > 0){
                cout << "a[i] = " << a[i] << endl;
                cout << "k - a[i] = " << k - a[i] << endl;
				if(a[i] == k-a[i]){
                    s = s + b[k-a[i]] - 1;
                    cout << "OK" << endl;
                    cout << "s = " << s << endl;
                }
				else{
                    s = s + b[k-a[i]];
                    cout << "NO" << endl;
                    cout << "s = " << s << endl;
                }
			}
		}
		//cout << s/2 <<endl;
	}
}