#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z;
        cin >> x >> y >> z;
        long long a[x], b[y], c[z];
        vector<int> v;
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < y; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < z; i++)
        {
            cin >> c[i];
        }
        int j = 0, q = 0, k = 0;
        while (j < x && q < y && k < z)
        {
            if (a[j] == b[q] && b[q] == c[k])
            {
                v.push_back(a[j]);
                j++, q++, k++;
            }
            else if (a[j] <= b[q] && a[j] <= c[k])
            {
                j++;
            }
            else if (b[q] <= a[j] && b[q] <= c[k])
            {
                q++;
            }
            else
                k++;
        }
        if (v.size() == 0)
        {
            cout << -1;
        }
        else
        {
            for (int l : v)
            {
                cout << l << " ";
            }
        }
        cout << endl;
    }
}
