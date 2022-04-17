// 별 찍기 - 8
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}

		for (int k = N - i; k > 0; k--)
		{
			cout << " ";
		}

		for (int m = N - i; m > 0; m--)
		{
			cout << " ";
		}
		for (int n = 0; n < i; n++)
		{
			cout << "*";
		}

		cout << "\n";
	}

	for (int i = N; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		for (int k = N - i; k > 0; k--)
		{
			cout << " ";
		}

		for (int m = N - i; m > 0; m--)
		{
			cout << " ";
		}

		for (int n = 0; n < i; n++)
		{
			cout << "*";
		}

		cout << "\n";
	}

	return 0;
}