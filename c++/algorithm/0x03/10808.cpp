// 알파벳 개수
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int alpha[26] = {};
	string str;
	cin >> str;

	for (auto c : str)
	{
		alpha[c - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << alpha[i] << '\n';
	}

	return 0;
}