// 숫자의 개수
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;
	int total;
	cin >> a >> b >> c;
	total = a * b * c;

	int res[10] = {};
	string str = to_string(total);

	for (auto c : str)
	{
		res[c - '0']++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << res[i] << '\n';
	}

	return 0;
}