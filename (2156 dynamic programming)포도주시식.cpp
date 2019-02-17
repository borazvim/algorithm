#include <iostream>
#define max(a,b)((a)>(b)?(a):(b))

using namespace std;

//이번와인을 안 마심
//이번 와인을 마시고 앞에 와인을 안마신 경우
//이번 와인을 마시고 앞에 와인도 마신 경우
int w[10001];
int d[10001];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> w[i];
	}
	d[0] = 0;
	d[1] = w[1];
	d[2] = w[1] + w[2];
	if (n >= 3) {
		for (int i = 3; i <= n; i++) {
			d[i] = max(max(d[i - 1], d[i - 2] + w[i]), d[i - 3] + w[i] + w[i - 1]);
		}
	}
	cout << d[n] << '\n';
	
}

