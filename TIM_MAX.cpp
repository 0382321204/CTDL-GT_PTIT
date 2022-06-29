#include <bits/stdc++.h>
using namespace std;

int modulo = 1e9 + 7;
main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        long long a[n + 5];

        long long answer = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        for(int i = 0; i < n; i++){
            answer = (answer + (a[i] * i % modulo)) % modulo;
        }

        cout << answer << endl;
    }
}