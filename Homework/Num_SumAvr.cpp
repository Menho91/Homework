#include <iostream>

using namespace std;

int Add(int arr[], int len)
{
	int result = 0;
	for (int i = 0; i < len; i++)
	{
		result += arr[i];
	}
	return result;
}

double Average(int arr[], int len)
{
	int sum = Add(arr, len);
	return sum / len;
}

int main()
{
	int score[5];
	int length = sizeof(score) / sizeof(int);
	for (int i = 0; i < length; i++)
	{
		cout << i + 1 << "��° �л��� ���� �Է� : ";
		cin >> score[i];
	}
	cout << "�հ� : " << Add(score, length) << endl;
	cout << "��� : " << Average(score, length) << endl;
	return 0;
}