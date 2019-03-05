#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

vector<int> v[101];
int a[101][101];
int check[101];

void dfs(int node) {
	for (int i = 0; i < v[node].size(); i++) {
		int next = v[node][i];
		if (check[next]==false) {
			check[next] = true;
			dfs(next);
		}
	}
}

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int k;
			cin >> k;
			if (k == 1) {
				v[i].push_back(j);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		memset(check, false, sizeof(check));
		dfs(i);
		for (int i = 0; i < n; i++) {
			if (check[i] == true) {
				cout << 1<<" ";
			}
			else
				cout << 0<<" ";
		}
		cout << endl;
	}
	
	
}
