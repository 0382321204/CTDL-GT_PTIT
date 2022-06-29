#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> A;
    vector<int> B;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            A.push_back(x);
            B.push_back(x);
        }

        sort(B.begin(), B.end());

        int l = 0, r = A.size()-1;
        int d1 = -1, d2 = -1;
        while (l <= r)
        {
            if (A[l] != B[l]) d1 = l;
            else l++;
            if (A[r] != B[r]) d2 = r;
            else r--;
            if(d1 >= 0 && d2 >= 0) break;
        }
        cout << d1+1 << " " << d2+1 << endl;
        A.clear();
        B.clear();
    }
    return 0;
}