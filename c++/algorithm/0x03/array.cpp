#include <bits/stdc++.h>
using namespace std;

// 추가
// 3번째 원소에 추가하고 싶으면 n번째~3번째 원소까지 한 칸 뒤로 땡기면 된다.
void insert(int idx, int num, int arr[], int &len)
{
	for (int i = len; i > idx; i--)
	{
		arr[i] = arr[i - 1];
	}

	arr[idx] = num;
	len++;
}

// 삭제
// 2번째 원소를 삭제하고 싶으면 3~n번째 원소를 한 칸 앞으로 땡기면 된다.
void erase(int idx, int arr[], int &len)
{
	len--;
	for (int i = idx; i < len; i++)
	{
		arr[i] = arr[i + 1];
	}
}

void printArr(int arr[], int &len)
{
	for (int i = 0; i < len; i++)
		cout << arr[i] << ' ';
	cout << "\n\n";
}

void insert_test()
{
	cout << "***** insert_test *****\n";
	int arr[10] = {10, 20, 30};
	int len = 3;
	insert(3, 40, arr, len); // 10 20 30 40
	printArr(arr, len);
	insert(1, 50, arr, len); // 10 50 20 30 40
	printArr(arr, len);
	insert(0, 15, arr, len); // 15 10 50 20 30 40
	printArr(arr, len);
}

void erase_test()
{
	cout << "***** erase_test *****\n";
	int arr[10] = {10, 50, 40, 30, 70, 20};
	int len = 6;
	erase(4, arr, len); // 10 50 40 30 20
	printArr(arr, len);
	erase(1, arr, len); // 10 40 30 20
	printArr(arr, len);
	erase(3, arr, len); // 10 40 30
	printArr(arr, len);
}

int main(void)
{
	insert_test();
	erase_test();
}