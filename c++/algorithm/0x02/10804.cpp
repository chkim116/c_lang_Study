#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[20];
	// 배열 생성
	for (int i = 0; i < 20; i++)
		arr[i] = i + 1;

	int start[10], end[10];

	// 뒤집기 위한 시작점과 끝점 입력
	for (int i = 0; i < 10; i++)
	{
		cin >> start[i] >> end[i];
		// 인덱스는 0부터 시작하므로 -1해서 인덱스 값을 맞춘다.
		int s = start[i] - 1;
		int e = end[i] - 1;

		// 뒤집기
		while (e > s)
		{
			swap(arr[s++], arr[e--]);
		}
	}

	for (int i = 0; i < 20; i++)
	{
		cout << arr[i] << '\n';
	}

	return 0;
}