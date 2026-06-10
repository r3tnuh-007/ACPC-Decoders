#include <iostream>

using namespace std;

void fill_array(long long array[], long long n)
{
	for (long long i = 0; i < n; i++) cin >> array[i];
}

long long max_val(long long array[], long long n)
{
	long long max_a = 0;
	long long pos = -1;
	for (long long i = 0; i < n; i++)
	{
		if (array[i] > max_a)
		{
			max_a = array[i];
			pos = i;
		}
	}
	return pos;
}

void swaps_b(long long a[], long long b[], long long n, long long pos_max)
{
	for (long long i = 0; i < n; i++)
	{
		if (i != pos_max && a[i] > b[i])
		{
			long long aux = a[i];
			a[i] = b[i];
			b[i] = aux;
		}
	}
}

void swaps_a(long long a[], long long b[], long long n)
{
	for (long long i = 0; i < n; i++)
	{
		if (a[i] < b[i])
		{
			long long aux = a[i];
			a[i] = b[i];
			b[i] = aux;
		}
	}
}

long long array_sum(long long array[], long long n)
{
	long long sum = 0;
	for (long long i = 0; i < n; i++)
	{
		sum += array[i];
	}
	return sum;
}

void cinema(long long n)
{
	long long a[n];
	long long b[n];

	fill_array(a, n);
	fill_array(b, n);
	swaps_a(a, b, n);
	long long pos_a = max_val(a, n);
	swaps_b(a, b, n, pos_a);
	cout << a[pos_a] + array_sum(b, n) << "\n";

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
