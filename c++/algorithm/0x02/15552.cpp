// 빠른 A + B
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> a >> b;
		cout << a + b << '\n';
	}
	return 0;
}