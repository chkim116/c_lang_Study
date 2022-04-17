// 최댓값

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int maxNum = 0, index = 0;
	int temp;

	for (int i = 0; i < 9; i++)
	{
		cin >> temp;

		// 최댓값 찾기
		if (temp > maxNum)
		{
			maxNum = temp;
			index = i + 1;
		}
	}

	cout << maxNum << '\n'
			 << index;

	return 0;
}