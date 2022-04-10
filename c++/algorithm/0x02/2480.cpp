// 주사위 세개
#include <bits/stdc++.h>
using namespace std;
// 같은 눈 3개 = 1만 (눈 x 천원)
// 같은 눈 2개 = 천원 + (눈 x 100)
// 모두 다른 눈 = 가장 큰 눈 x 100

int main(void)
{

	int a, b, c;
	cin >> a >> b >> c;

	int cnt = 0;

	if (a == b && b == c)
		cout << 10000 + a * 1000;
	else if (a == b || a == c)
		cout << 1000 + a * 100;
	else if (b == c)
		cout << 1000 + b * 100;
	else
		cout << max({a, b, c}) * 100;

	return 0;
}