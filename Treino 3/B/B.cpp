#include <bits/stdc++.h>

using namespace std;

//by anter luis
void solve(long long n, long long k)
{
	long long ans, a[n], b[k];
	for (long long i = 0; i < n; i++) cin >> a[i];
	for (long long i = 0; i < k; i++) cin >> b[i];
	ans = 0;
	sort(a, a + n);
	sort(b, b + k);
	for (long long i = 0; i < n; i ++) ans += a[i];
	long long id = n;
	for (long long i = 0; i < k; i++)
	{
		id -= b[i];
		if (id >= 0)
			ans -= a[id];
	}
	cout << ans << "\n";
}

int main(void)
{
	long long t;

	cin >> t;
	while (t --)
	{
		long long n, k;
		cin >> n >> k;
		solve(n, k);
	}
	return 0;
}
