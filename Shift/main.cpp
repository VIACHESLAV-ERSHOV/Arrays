#include <iostream>
using namespace std;

#define tab "\t"
//#define SHIFT_LEFT
#define SHIFT_RIGHT

void main()
{
	setlocale(LC_ALL, "");
	//cout << int() << endl;
	//int() - значение по умолчанию для типа 'int'
	//double() - значение по умолчанию для типа 'double'


	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };

#ifdef SHIFT_LEFT
	// вывод исходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;


	//сдвиг массива:
	int number_of_shifts;
	cout << " ввидете количество сдвигов:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}

	/*int k = arr[n];
	int shift=arr[0];

	cout << "количество сдвигов: ";cin >> k;

	for (int i = 0; i < n; i++)
	{
		arr[i - k] = arr[i];
		arr[i] = shift;
	}
	cout << endl;*/
	// вывод сдвинутного массива на эран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // SHIFT_LEFT

#ifdef SHIFT_RIGHT
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	int number_of_shifts;
	cout << " ввидете количество сдвигов:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // SHIFT_RIGHT

}