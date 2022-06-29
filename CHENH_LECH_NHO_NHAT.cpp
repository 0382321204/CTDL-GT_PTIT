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
        long long a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        long long min = a[0];
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] - a[i + 1] < min)
                min = a[i] - a[i + 1];
        }
        cout << min;
        cout << endl;
    }
}
