#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> ds;
int dem = 0;
void sinh(vector<string> mem)
{
    if (dem == 10)
        return;
    ds.push_back(mem);
    vector<string> x;
    for (int i = 0; i < mem.size(); i++)
    {
        x.push_back("0" + mem[i]);
    }
    for (int i = mem.size() - 1; i >= 0; i--)
    {
        x.push_back("1" + mem[i]);
    }
    dem++;

    sinh(x);
}

int main()
{
    sinh({"0", "1"});
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < ds[n - 1].size(); i++)
        {
            cout << ds[n - 1][i] << " ";
        }
        cout << endl;
    }
}