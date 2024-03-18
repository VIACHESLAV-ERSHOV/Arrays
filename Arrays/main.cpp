#include <iostream>
using namespace std;

#define CLASSWORK
//#define WORK_1
//#define WORK_2
//#define WORK_3
//#define WORK_4
//#define WORK_5
#define tab "\t"

void main()
{
	setlocale (LC_ALL, "");

#ifdef CLASSWORK
	const int SIZE = 5;
	int arr[SIZE];
	cout << "введите элементы масссива: ";
	
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	//вывод массива на экран в прямом порядке:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//вывод массива на экран в обратном поррядке:

	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//вычисление суммы элементов массивов:

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "сумма элементов массива: " << sum << endl;

	// средне-ареметическое двух массивов:

	cout << "среднее арифметическое: " << (double)sum / SIZE << endl;

	//минимального и максимального значения в миссиве

	int max, min;
	max = min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	 }
	cout << "максимальное значение в массиве: " << max << "\n";
	cout << "минимальное значение в массиве: " << min << "\n";

#endif // CLASSWORK

	//const int SIZE = 5;
	//int arr[SIZE] = {1,2,3,5,4};

#ifdef WORK_1
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // WORK_1

#ifdef WORK_2
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // WORK_2

#ifdef WORK_3
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] + arr[i] << "\t";
	}
	cout << endl;
#endif // WORK_3

#ifdef WORK_4
	for (int i = 0; i < SIZE; i++)
	{
		cout << (arr[i] + arr[i]) / 2 << "\t";
	}
	cout << endl;
#endif // WORK_4

#ifdef WORK_5
	int max = arr[0];
	int min = arr[0];
	for
		(int i = 0; i < SIZE; i++)
	{
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	cout << "максимум: " << max << "\n";
	cout << "минимум: " << min << "\n";
#endif // WORK_5


}