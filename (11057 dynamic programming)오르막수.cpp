#include <iostream>
using namespace std;

//d[i][j] : 길이가 i이고, 마지막 숫자가 j인 오르막 수의 개수
//d[i][j]=d[i-1][k] (0<=k<=j)

int d[1001][10];

int main() {
	int n;
	cin >> n;
	for (int j = 0; j <= 9; j++) {
		d[1][j] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			d[i][j] = 0;
			for (int k = 0; k <= j; k++) {
				d[i][j] += d[i - 1][k];
				d[i][j] %= 10007;
			}
		}
	}
	long long ans = 0;
	for (int i = 0; i < 10; i++)
		ans += d[n][i];
	ans %= 10007;
	cout << ans << '\n';
}
