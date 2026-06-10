#include <iostream>

using namespace std;

void fill_array(long long array[], long long n)
{
	for (long long i = 0; i < n; i++) cin >> array[i];
}


void cinema(long long n)
{
	long long a[n];
	long long b[n];
	long long sum, ans;

	fill_array(a, n);
	fill_array(b, n);
	sum = ans = 0;
	for (long long i = 0; i < n; i++)
		sum += max(a[i], b[i]);
	for (long long i = 0; i < n; i ++)
		ans = max(ans, sum + min(a[i], b[i]));

	cout << ans << "\n";
}

int main(void)
{
	int t;

	cin >> t;
	while (t --)
	{
		long long n;
		cin >> n;
		cinema(n);
	}
}
