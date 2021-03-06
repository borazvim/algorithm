#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> a[1001];
bool check[1001];

void dfs(int node) {
	check[node] = true;
	for (int i = 0; i < a[node].size(); i++) {
		int next = a[node][i];
		if (check[next] == false) {
			dfs(next);
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	int cnt = 0;
	memset(check, false, sizeof(check));
	for (int i = 1; i <= n; i++) {
		if (check[i] == false) {
			cnt++;
			dfs(i);
		}
	}
	cout << cnt << endl;
}
