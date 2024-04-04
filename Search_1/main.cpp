#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	// поиск повторений:
	for (int i = 0; i < n; i++)
	{
		// arr[i] - выранный элемент
		bool  met_before = false; //предполагаем, что выбранное значение ранее не встречалось
		//но это нужно проверить:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; break;  // break - прерывает текущую итерацию и все последующее
			}
		}
		if (met_before)continue;  //continue - прерывает текущую операцию, и переходит к следующей
		int counter = 0;        //счетчик поторений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])counter++;
		}
		if (counter) printf("значение %i повторяется %i раз\n", arr[i], counter);
		
		//if (counter)cout << "значение " << arr[i] << "повторяется " << counter << "раз " << endl;
	}

}
