#include <iostream>
using namespace std;

/*
최소공배수: (a*b)/gcd
*/

int gcd(int a, int b) {
	int r = a % b;
	if (r == 0)
		return b;
	else
		return gcd(b, r);
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int x, y;
		cin >> x >> y;
		cout << (x*y)/gcd(x, y) << '\n';
	}
}
