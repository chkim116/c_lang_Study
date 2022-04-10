// 일곱 난쟁이
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int input[9];

	for (int i = 0; i < 9; i++)
		cin >> input[i];

	sort(input, input + 9);

	int res = 0;
	for (int i = 0; i < 9; i++)
		res += input[i];

	cout << res;

	for (int i = 0; i < 7; i++)
	{
		cout << input[i] << '\n';
	}

	return 0;
}