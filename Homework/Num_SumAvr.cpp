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
		cout << i + 1 << "번째 학생의 점수 입력 : ";
		cin >> score[i];
	}
	cout << "합계 : " << Add(score, length) << endl;
	cout << "평균 : " << Average(score, length) << endl;
	return 0;
}