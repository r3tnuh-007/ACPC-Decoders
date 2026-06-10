#include <iostream>

using namespace std;

void solve(long long n)
{
	long long a[n];
	long long x, y;

	for (long long i = 0; i < n; i++) cin >> a[i];

	for (long long i = 0; i < n; i++)
	{
		for (long long j = i + 1; j < n; j++)
		{
			long long mod = a[j] % a[i];
			if (mod % 2 == 0)
			{
				cout << a[i] << " " << a[j] << "\n";
				return;
			}
		}
	}
	cout << "-1\n";
}

int main(void)
{
	long long t;

	cin >> t;
	while (t --)
	{
		long long n;
		cin >> n;
		solve(n);
	}
	return 0;
}
