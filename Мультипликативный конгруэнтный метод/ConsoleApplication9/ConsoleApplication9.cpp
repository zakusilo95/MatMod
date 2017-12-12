// ConsoleApplication9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


void main()
{
	// Вводи множитель к, модуль m и начальное значение а0.
	int k, m, a0;
	cout << "Enter k=";
	cin >> k;
	cout << "\n Enter m=";
	cin >> m;
	cout << "\n Enter a0=";
	cin >> a0;
	int *Array;
	Array = new int [m-1];
	// Высчитываем ряд Аj по формуле и выводим занчения на экран
	for (int i = 1; i < m ; i++)
	{
		
		Array[0] = a0;
		Array[i] = (k*Array[i - 1])%m;
		
		cout << "A"<<i<<"="<<Array[i]<<"\n";
	}
	system("pause");
}

