#include <bits/stdc++.h>
using namespace std;

string gray(string a)
{
    string x = "";
    for (int i = 0; i < a.size(); i++)
    {
        if (i == 0)
            x += a[i];
        else
        {
            if (a[i] != a[i - 1])
                x += "1";
            else
                x += "0";
        }
    }
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        cout << gray(a) << endl;
    }
}