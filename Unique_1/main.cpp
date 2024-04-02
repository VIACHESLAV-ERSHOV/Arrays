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

	//заполнение массива уникальными случайными числами:

	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % n;
			unique = true;   //предположим, что сгенерировалось уникальное случайное число,
			//но это нужно проверить:
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		}while (!unique);
	}

	//вывод на экран:

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
 }