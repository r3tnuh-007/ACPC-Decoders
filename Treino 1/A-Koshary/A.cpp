#include <iostream>

using namespace std;

void koshary(int x, int y){
	if (x % 2 != 0 && y % 2 != 0)
		cout << "NO\n";
	else
		cout << "YES\n";
}

int main() {
	int t;
	cin >> t;
	while (t --)
	{
		int x, y;
		cin >> x >> y;
		koshary(x, y);
	}
    return 0;
}
