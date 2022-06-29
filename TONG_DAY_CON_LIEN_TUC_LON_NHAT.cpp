#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x, ans = 0, s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            s += x;
            ans = max(ans, s);
            if (s < 0) s = 0;
        }
        cout << ans << endl;
    }
}

