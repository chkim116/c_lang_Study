// 윷놀이
// 룩업
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a;

	for (int i = 0; i < 3; i++)
	{
		int cnt = 0;

		for (int i = 0; i < 4; i++)
		{
			cin >> a;
			// 배 = 0 등 = 1;
			if (a == 0)
				cnt++;
		}

		string res = "EABCD";
		cout << res[cnt] << '\n';
	}

	return 0;
}