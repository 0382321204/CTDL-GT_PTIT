#include <bits/stdc++.h>
using namespace std;

int n, W, w[105], v[105], a[105], xopt[105], fopt;
void Update(int x) {
    fopt = x;
    for (int i = 1; i <= n; i++) xopt[i] = a[i];
}
int Calc() {
    int sum = 0;
    for (int i = 1; i <= n; i++) sum += (a[i] * v[i]);
    return sum;
}
bool Check() {
    int weight = 0;
    for (int i = 1; i <= n; i++) weight += (a[i] * w[i]);
    return (weight <= W);
}
void Try(int k) {
    if (k > n) return;
    for (int i = 0; i < 2; i++) {
        a[k] = i;
        if (k == n) {
            if (Check()) {
                int sum = Calc();
                if (sum > fopt) Update(sum);
            }
        } else Try(k + 1);
    }
}
int main() {
    fopt = INT_MIN;
    cin >> n >> W;
    for (int i = 1; i <= n; i++) cin >> v[i];
    for (int i = 1; i <= n; i++) cin >> w[i];
    Try(1);
    cout << fopt << endl;
    for (int i = 1; i <= n; i++) cout << xopt[i] << " ";
    return 0;
}
