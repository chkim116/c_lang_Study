// 홀수
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int input, total = 0, min = 100;

	for (int i = 0; i < 7; i++)
	{
		cin >> input;
		// 홀수면
		if (input % 2 != 0)
		{
			total += input;
			if (min > input)
			{
				min = input;
			}
		};
	}

	if (total > 0)
	{
		cout << total << '\n'
				 << min;
	}
	else
		cout << -1;

	return 0;
}