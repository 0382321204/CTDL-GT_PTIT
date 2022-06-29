#include <bits/stdc++.h>
using namespace std;
long long F[100];
char FBW(int n, long long k)
{
	if (n == 1) return 'A';
	if (n == 2) return 'B';
	if (k <= F[n - 2]) return FBW(n - 2, k);
	return FBW(n - 1, k - F[n - 2]);
}
main()
{
	int t, n;
	long long k;
	F[0] = 0;
	F[1] = 1;
	for (int i = 2; i <= 92; i++)
		F[i] = F[i - 1] + F[i - 2];
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		cout << FBW(n, k) << endl;
	}
}
