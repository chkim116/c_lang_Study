// 별 찍기 07
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	// 정방향
	for (int i = 0; i < N; i++)
	{
		for (int j = N - i; j > 1; j--)
		{
			cout << " ";
		}

		for (int k = 0; k < (i * 2 + 1); k++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	// 역방향
	for (int i = N - 2; i >= 0; i--)
	{
		cout << " ";
		for (int j = N - 2; j > i; j--)
		{
			cout << " ";
		}

		for (int k = (i * 2 + 1); k > 0; k--)
		{
			cout << "*";
		}
		cout << '\n';
	}

	return 0;
}
