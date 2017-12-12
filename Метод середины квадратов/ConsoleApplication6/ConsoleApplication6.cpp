// ConsoleApplication6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream> 
#include <sstream>
#include <string>
using namespace std;

// Метод серидины квадратов

void main()
{
	int number;
	cout<<"Enter value \n";
	cin >> number;
	// введенное чило возводим в квадрат. Переобразуем число в строку.
	//Если длина полученного знаничения меньше 8, то слева добавляем нули
	// Из полученной строки цифр выбираем 4 цифры начиная с 2-й позиции. Выводим на эеран полученные значения
	// выведенное 4-х занчное чило назад преобразуем из строки в число и повторяем цикл
	for (int i = 0; i < 100; i++)
	{
		number = number * number;
		ostringstream _string;
		_string << number;
		string string1 = _string.str();

		if (string1.length() < 8)
		{
			string1 = "0" + string1;
		}
		
		string1 = string1.substr(2, 4);
		cout << string1 <<"\n";
		istringstream ist(string1);
		ist >> number;

	}
		
	system("pause");

	
}

