#include <iostream>
using namespace std;
/*
최대공약수: 유클리드호제법 r=a%b
gcd(a,b)=gcd(b,r) -> r자리가 0이 될때의 b가 최대공약수
최소공배수는 (a*b)/최대공약수 로 구함
*/
int gcd(int a, int b) {
	int r = a % b;
	if (r == 0)
		return b;
	else
		return gcd(b, r);
}

int main() {
	int a,b;
	cin >> a >> b;
	cout << gcd(a, b) << '\n' << (a*b) / gcd(a, b) << '\n';
}
