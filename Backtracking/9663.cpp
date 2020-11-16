#include <iostream>
using namespace std;
int N;
int result = 0;
int arr[15]; // arr[i]�� i��° ���� �� ��
// 1������ �ؼ� ���� ������ ������, �� ���������� ���� ���鿡 ��ġ�� �ప�� ���ϸ鼭 N��°���� ���� ��� 1����,
// �ƴҽ� false�� ��ȯ�ϰ� ������ �ȴ�.

bool check(int i)
{
	for (int j = 0; j < i; j++) { // ��ġ�� ���
		if (arr[i] == arr[j] || i-j == abs(arr[i] - arr[j]))
			return false;
	}
	return true;
}
void nqueen(int i)
{
	if (i == N) result++;
	else {
		for (int j = 0; j < N; j++) {
			arr[i] = j;
			if (check(i))
				nqueen(i + 1);
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> N;
	nqueen(0);
	cout << result << "\n";
}