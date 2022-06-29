#include <bits/stdc++.h>
using namespace std;
int a[25][25];
int n;
bool check;
void back_track(int x, int y, string res)
{
    if (x == n && y == n){
        cout << res << " ";
        check = true;
    }
    if (a[x + 1][y] == 1) back_track(x + 1, y, res + "D");
    if (a[x][y + 1] == 1) back_track(x, y + 1, res + "R");
}

int main()
{
    int t; cin >> t;
    while (t--) {
        check = false;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) cin >> a[i][j];
        }
        if (a[1][1] == 0 || a[n][n] == 0) cout << -1;
        else{
            back_track(1, 1, "");
            if (!check) cout << -1;
        }
        cout << endl;
    }
}