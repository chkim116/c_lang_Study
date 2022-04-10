#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x, a[10000];

	cin >> n >> x;

	// 정수 n개 입력
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (x > a[i])
			cout << a[i] << ' ';
	}

	return 0;
}