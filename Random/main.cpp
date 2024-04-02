#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int minRand, maxRand;
	do
	{
		system("CLS"); //функция system() позволяет вызвать любую команду командной строки (консоли)
		               //
		cout << "Введите минимальное случайное число: "; cin >> minRand;
		cout << "Введите максимальное случайное число: "; cin >> maxRand;
		if (minRand >= maxRand)
		{
			std::cerr << "Error: введены некорректные числа" << endl;
			system("PAUSE");
		}
	} while (minRand >= maxRand);
	//запалнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		//arr[i] = rand()%100+50;     //Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767 (RAND_MAX)
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	//вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//сортировка массива:
	for (int i = 0; i < n; i++)   // счетчик 'i' выбирает элемент, в который нужно поместить минимальное значение 
	{
		for (int j = i + 1; j < n; j++)  //счетчик 'j' перебирает оставшиеся эле
		{
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}

		}
	}
	cout << endl;

	//вывод отсортированного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}