#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if ((a < b && b < c) || (c < b && b < a))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
