#include <iostream>
using namespace std;

//#define DEC_2_BIN
//#define DEC_2_HEX
#define DEC_2_HEX_TERNARY

void main()
{
	setlocale(LC_ALL, "");
	int decimal;   //десятичное число, введенное с клавиатуры
	cout << "введите десятичное число = "; cin >> decimal;
#ifdef DEC_2_BIN
	const int MAX_CAPALICY = 32;  //максимально возможная разрядность двоичного числа
	bool binary[MAX_CAPALICY]{};  //этот массив будет хранить разряды двоичного числа
	int i = 0; // номер разряда
	/*for (; decimal > 0; i++)
	{
		binary[i] = decimal % 2;// сохраняем младший разряд числа в массив
		decimal /= 2;           // убираем младший двоичный разряд из десятичного числа

	}*/
	for (; decimal; decimal /= 2)binary[i++] = decimal % 2;
	//для получения конечного результата нужно переписать остатки от деления в обратном порядке
	//начиная с последнего результата от деления
	for (--i; i >= 0; i--)
	{
		cout << binary[i];
	}
	cout << endl;
#endif // DEC_2_BIN

#ifdef DEC_2_HEX
	const int MAX_HEX_CAPALICY = 8;
	char hex[MAX_HEX_CAPALICY] = {};
	int i = 0;
	for (; decimal; i++)
	{
		hex[i] = decimal % 16;  //получаем младший шестнадцатеричный разряд и сохраняем его
		decimal /= 16;          //убираем младший шестнадцатеричный разряд 
	}
	for (--i; i >= 0; i--)
	{

		if (hex[i] < 10)
			cout << (int)hex[i];
		else
			cout << char(hex[i] + 55);
	}
	cout << endl;
	//cout << "шестнадцатичное число = " << hex << decimal << endl;  
#endif // DEC_2_HEX

	const int MAX_HEX_CAPALICY = 8;
	char hex[MAX_HEX_CAPALICY] = {};
	
	int i = 0;
	for (; decimal; i++)
	{
		hex[i] = decimal % 16; 
		decimal /= 16;          
	}
	for (--i; i >= 0; i--)
	{   
		
		cout << char(hex[i] < 10 ?  hex[i]+48 : (hex[i] + 55));
		
	}
	cout << endl;
main();
}
