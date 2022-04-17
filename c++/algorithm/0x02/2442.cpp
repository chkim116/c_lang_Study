// 별찍기 04
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

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
}