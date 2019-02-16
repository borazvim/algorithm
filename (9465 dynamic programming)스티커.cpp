#include <iostream>
#define max(a,b)(((a)>(b))?(a):(b))
using namespace std;

long long v[100001][3];
long long d[100001][3]; 

int main() {
	int T, N;
	cin >> T;
	while (T--) {
		cin >> N;
		for (int i = 1; i <= N; i++) {
			cin >> v[i][1];
		}
		for (int i = 1; i <= N; i++) {
			cin >> v[i][2];
		}
		d[0][0] = 0;
		d[0][1] = 0;
		d[0][2] = 0;

		for (int i = 1; i <= N; i++) {
			d[i][0] = max(max(d[i - 1][0], d[i - 1][1]), d[i - 1][2]);
			d[i][1] = max(d[i - 1][0], d[i - 1][2]) + v[i][1];
			d[i][2] = max(d[i - 1][0], d[i - 1][1]) + v[i][2];
		}

		/*long long ans = 0;
		for (int i = 1; i <= N; i++) {
			ans = max(max(ans, d[i][0]), max(d[i][1], d[i][2]));
		}
		cout << ans << '\n';
	}*/
		long long ans = 0;
		ans = max(max(d[N][0], d[N][1]), d[N][2]);
		cout << ans << '\n';
	}
}

