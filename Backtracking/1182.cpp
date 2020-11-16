#include <iostream>
using namespace std;
// 부분수열의 합
// A번 정점의 DFS가 끝날 때마다 A번 정점을 방문하기 전 상태로 되돌려놔야 한다
int N, S;
int arr[20]; // 입력받을 수 넣을 배열
int cnt, sum;
void dfs(int current)
{
	if (current == N) return; // 제일 아래 노드까지 방문
	if (sum + arr[current] == S) cnt++; // 현재까지의 합이 S면 결과 +1
	dfs(current + 1); // 현재 원소를 포함시키지 않고 시도

	sum += arr[current]; // 현재 노드를 포함시키고 시도
	dfs(current + 1);

	sum -= arr[current]; // 마지막에 다시 이번 원소 빼기
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> N >> S;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	dfs(0); // root노드부터 시작
	cout << cnt << "\n";
}