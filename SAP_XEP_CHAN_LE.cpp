#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> chan;
    vector<int> le;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            chan.push_back(a[i]);
        else
            le.push_back(a[i]);
    }
    sort(le.begin(), le.end(), greater<int>());
    sort(chan.begin(), chan.end());
    int i = 0, j = 0;
    for (int k = 0; k < n; k++)
    {
        if (k % 2 == 1)
        {
            cout << le[i] << " ";
            i++;
        }
        else
        {
            cout << chan[j] << " ";
            j++;
        }
    }
}