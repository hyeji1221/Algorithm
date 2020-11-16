#include <iostream>
using namespace std;
// �κм����� ��
// A�� ������ DFS�� ���� ������ A�� ������ �湮�ϱ� �� ���·� �ǵ������� �Ѵ�
int N, S;
int arr[20]; // �Է¹��� �� ���� �迭
int cnt, sum;
void dfs(int current)
{
	if (current == N) return; // ���� �Ʒ� ������ �湮
	if (sum + arr[current] == S) cnt++; // ��������� ���� S�� ��� +1
	dfs(current + 1); // ���� ���Ҹ� ���Խ�Ű�� �ʰ� �õ�

	sum += arr[current]; // ���� ��带 ���Խ�Ű�� �õ�
	dfs(current + 1);

	sum -= arr[current]; // �������� �ٽ� �̹� ���� ����
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> N >> S;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	dfs(0); // root������ ����
	cout << cnt << "\n";
}