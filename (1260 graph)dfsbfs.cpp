#include <iostream>
#include <cstdio>
#include <cstring> 
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

vector <int> vt[1001];
bool check[1001];

void dfs(int node) {
	check[node] = true;
	cout << node;
	for (int i = 0; i < vt[node].size(); i++) {
		int next = vt[node][i];
		if (check[next] == false) {
			dfs(next);
		}
	}
}

void bfs(int start) {
	queue<int> q;
	memset(check, false, sizeof(check));
	check[start] = true;
	q.push(start);
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		cout << node;
		for (int i = 0; i < vt[node].size(); i++) {
			int next = vt[node][i];
			if (check[next] == false) {
				check[next] = true;
				q.push(next);
			}
		}
	}
}

int main() {
	int n, m, start;
	cin >> n >> m >> start;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		vt[u].push_back(v);
		vt[v].push_back(u);

	}
    for (int i=1; i<=n; i++) {
        sort(vt[i].begin(), vt[i].end());
    }
	dfs(start);
    puts("");
	bfs(start);
    puts("");
}
