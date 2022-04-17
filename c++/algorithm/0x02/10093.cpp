// 숫자
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long input[2];

	for (int i = 0; i < 2; i++)
		cin >> input[i];

	// 처음 수가 높을 수 있으므로 체크
	if (input[0] > input[1])
		swap(input[1], input[0]);

	// 최소가 1인 조건 체크
	if (0 > input[1] - (input[0] + 1))
	{
		cout << 0;
	}
	else
	{
		cout << input[1] - (input[0] + 1) << '\n';
		for (long long i = input[0] + 1; i < input[1]; i++)
		{
			cout << i << '\n';
		}
	}

	return 0;
}