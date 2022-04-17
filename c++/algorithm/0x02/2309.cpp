// 일곱 난쟁이
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int input[9], results[7];
	int total = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> input[i];
		total += input[i];
	}

	// 완전 탐색
	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			// 전체 - (난쟁이 2명) == 100일시 정답임.
			if (total - (input[i] + input[j]) == 100)
			{
				// 새로운 배열을 만들기 위해 m 선언
				for (int k = 0, m = 0; k < 9; k++)
				{
					if (k != i && k != j)
					{
						results[m++] = input[k];
					}
				}
				break;
			}
		}
	}

	sort(results, results + 7);
	for (int i = 0; i < 7; i++)
		cout << results[i] << '\n';

	return 0;
}