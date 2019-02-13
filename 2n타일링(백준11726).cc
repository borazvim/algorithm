#include <iostream>
using namespace std;

//d[i]: 2*i 직사각형을 채우는 방법의 수

int d[1001];

int main() {
	int n;
	cin >> n;
	d[1] = 1;
	d[2] = 2;
	for (int i = 3; i <= n; i++) {
		d[i]=d[i - 1] + d[i - 2];
        d[i] %= 10007;
	}
	cout << d[n] << endl;
}