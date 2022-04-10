// 대표값2
// 배열-sort 활용
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int nums[5], total = 0, mid = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> nums[i];
		total += nums[i];
	}

	sort(nums, nums + 5);

	cout
			<< total / 5 << '\n'
			<< nums[2];

	return 0;
}