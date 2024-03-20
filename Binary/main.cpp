#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

    int decimal;

    cout << "десятичное число: "; cin >> decimal;
    
    cout << "\nДвоичное число: ";

    for (int i = decimal; i >= 0; i--)
    {
        if ((1 << i) & decimal)
        {
            cout << "1"; 
        }
        else
        {
            cout << "0";
        }
    }

    cout << endl;
}