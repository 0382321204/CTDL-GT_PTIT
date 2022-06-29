#include <bits/stdc++.h>
using namespace std;

/* N : số đơn vị lương thực nhiều nhất bạn có thể mua trong ngày.
S : số lượng ngày bạn cần được sử dụng lương thực để tồn tại.
M : số đơn vị lương thực cần có mỗi ngày để bạn tồn tại. */
int solve()
{
    int n, s, m;
    cin >> n >> s >> m;
    int lt = s * m;
    int day = s - s / 7;
    cout << "lt = " << lt << endl;
    cout << "day = " << day << endl;
    if (lt > day * n)
        return -1;
    for (int i = 1; i <= day; i++)
    {
        if (lt <= n * i)
            return i;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}
