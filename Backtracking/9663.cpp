#include <iostream>
using namespace std;
int N;
int result = 0;
int arr[15]; // arr[i]는 i번째 열의 행 값
// 1열부터 해서 값을 설정한 다음에, 그 다음열부터 이전 열들에 위치한 행값을 비교하면서 N번째까지 갔을 경우 1증가,
// 아닐시 false를 반환하고 끝내면 된다.

bool check(int i)
{
	for (int j = 0; j < i; j++) { // 겹치는 경우
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