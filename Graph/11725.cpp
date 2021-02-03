#include <iostream>
# include<algorithm>
#include <vector>
# define MAX 100001
using namespace std;
vector<int> tree[MAX];
bool visited[MAX];
int parent[MAX];


void find_parent(int node) {
	visited[node] = true;

	for (int i = 0; i < tree[node].size(); i++) {
		int next = tree[node][i];
		if (!visited[next]) {
			parent[next] = node;
			find_parent(next);
		}
	}
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N-1; i++) {
		int node1, node2;
		cin >> node1 >> node2;
		tree[node1].push_back(node2);
		tree[node2].push_back(node1);
	}
	find_parent(1);
	for (int i = 2; i <=N; i++) {
		cout << parent[i] << endl;
	}
}