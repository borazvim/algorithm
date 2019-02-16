#include <iostream>
using namespace std;

//d[n][0]:n자리이친수, 마지막자리숫자0
//d[n][1]:n자리이친수, 마지막자리숫자1

long long d[91][2];

int main() {
	int n;
	cin >> n;
	d[1][0] = 0;
	d[1][1] = 1;
	for (int i = 2; i <= n; i++) {
		d[i][0] = d[i - 1][0] + d[i - 1][1];
		d[i][1] = d[i - 1][0];
	}
	cout << d[n][0] + d[n][1] << '\n';
	return 0;
}
