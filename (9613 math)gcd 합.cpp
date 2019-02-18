#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
	int r = a % b;
	if (r == 0)
		return b;
	else
		return gcd(b, r);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> num(n);
		for (int i = 0; i < n; i++) {
			cin >> num[i];
		}
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				sum += gcd(num[i], num[j]);
			}
		}
		cout << sum << '\n';
	}
}
