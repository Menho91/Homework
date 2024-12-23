#include <iostream>

using namespace std;

void AscendingSort(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void DescendingSort(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int arr[9] = { 5, 9, 4, 1, 2, 8, 6, 7, 3 };
	int choice;

	cout << "오름차순은 1, 내림차순은 2 입력 : ";
	cin >> choice;

	if (choice == 1)
		AscendingSort(arr, 9);
	else if (choice == 2)
		DescendingSort(arr, 9);
	else
	{
		cout << "1 또는 2를 입력해주세요." << endl;
		return 1;
	}

	cout << "정렬된 배열 출력" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}