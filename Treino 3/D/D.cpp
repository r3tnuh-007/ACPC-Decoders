#include <iostream>

using namespace std;

void solve(long long n)
{
	long long x, y;
	cin >> x >> y;
	x = min(x, y);
	cout << (n + x - 1) / x << "\n";
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
