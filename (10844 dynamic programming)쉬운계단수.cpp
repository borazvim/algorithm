#include <iostream>
using namespace std;

//d[i][j]=길이가 i이며, 마지막 숫자가 j인 계단의 수
//d[i][j]=d[i-1][j-1]+d[i-1][j+1]

int d[101][10];
//%1000000000
int main() {
	int n;
	cin >> n;
	for (int j = 1; j <= 9; j++) {
		d[1][j] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			d[i][j] = 0;
			if (j - 1 >= 0)
				d[i][j] += d[i - 1][j - 1];
			if (j + 1 <= 9)
				d[i][j] += d[i - 1][j + 1];
			d[i][j] %= 1000000000;
		}
		
	}
	long long ans = 0;
	for (int j = 0; j <= 9; j++) {
		ans += d[n][j];
	}
	ans %= 1000000000;
	cout << ans << '\n';
}
