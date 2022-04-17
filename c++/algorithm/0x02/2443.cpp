// 별 찍기 - 6
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	for (int i = N - 1; i >= 0; i--)
	{
		for (int j = i; j < N - 1; j++)
		{
			cout << " ";
		}

		for (int k = (i * 2 + 1); k > 0; k--)
		{
			cout << "*";
		}

		cout << "\n";
	}

	return 0;
}