#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], dem = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            if (i < n - 1)
            {
                int *ans = min_element(a + i + 1, a + n);
                //cout << "ans = " << *ans << endl;
                if (*ans < a[i])
                {
                    dem++;
                    //cout << a[i] << " va " << a[ans - a] << endl;
                    swap(a[i], a[ans - a]);
                }
            }
        }
        cout << dem << endl;
    }
    return 0;
}