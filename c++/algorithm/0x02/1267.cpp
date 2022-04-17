// 핸드폰 요금
#include <bits/stdc++.h>
using namespace std;

// 통화 개수 N, 통화시간 N개
// 영식은 30초마다 10원
// 민식은 60초마다 15원
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;

	int calls[n];
	int Y = 0, M = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> calls[i];
		// 1초부터 요금제가 적용되기 떄문에 항상 1를 증가시켜줌.
		Y += ((calls[i] / 30) + 1) * 10;
		M += ((calls[i] / 60) + 1) * 15;
	}

	if (Y == M)
	{
		cout << 'Y' << '\n'
				 << 'M' << '\n'
				 << Y;
		return 0;
	}

	if (Y > M)
	{
		cout << 'M' << '\n'
				 << M;
	}
	else
	{
		cout << 'Y' << '\n'
				 << Y;
	}

	return 0;
}