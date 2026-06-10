#include <iostream>

using namespace std;

void check_z(long long x, long long y)
{
	long long z = 2 * x;
	if (y > z)
		cout << "YES\n";
	else
		cout << "NO\n";
}

int main() {
	long long t;

	cin >> t;
	while (t --)
	{
		long long x, y;
		cin >> x >> y;
		check_z(x, y);
	}
	return 0;
}
