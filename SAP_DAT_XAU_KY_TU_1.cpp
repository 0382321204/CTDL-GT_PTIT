#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int d = 2;
        int a['z' + 1] = {0}, n = s.size();
        for (int i = 0; i < n; i++)
            a[s[i]]++;
        int m = *max_element(a, a + 'z');
        if ((m - 1) * d < n) cout << 1 << endl;
        else cout << -1 << endl;
    }
}



/* #include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        map <char, int> myMap;

        int max = 0;
        for(int i = 0; i < s.size(); i++){
            myMap[s[i]]++;
            if(myMap[s[i]] > max) max = myMap[s[i]];
        }

        //cout << "max = " << max << endl;
        if(s.size() - max >= max - 1) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
} */