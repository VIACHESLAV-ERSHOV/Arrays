#include <iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	//cout << int() << endl;
	//int() - значение по умолчанию для типа 'int'
	//double() - значение по умолчанию для типа 'double'
	
	
	const int n = 10;
	int arr[n] = {0,1,1,2,3,5,8,13,21,34};

	// вывод исходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
    

	//сдвиг массива:
	int k; 
	cout << "количество сдвигов: ";cin >> k;
	int shift = arr[0];
	for (int i = 0; i < n; i++)
	{
		arr[i - k] = arr[i];
		arr[i] = shift;

	}
	// вывод сдвинутного массива на эран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}