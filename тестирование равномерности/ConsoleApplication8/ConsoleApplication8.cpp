// ConsoleApplication7.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int Array[100000] = {};
	float Statistika[10] = {};
	//��������� ����������� ��������� �������� � ������� ���������� ���������� ���� �� 0 �� 10
	for (int i = 0; i < sizeof(Array) / sizeof(*Array); i++)
	{
		int number;
		number = 0 + rand() % 11;

		Array[i] = number;
		switch (Array[i])
		{
		case 0:
			Statistika[0] ++;
			break;
		case 1:
			Statistika[1] ++;
			break;
		case 2:
			Statistika[2] ++;
			break;
		case 3:
			Statistika[3] ++;
			break;
		case 4:
			Statistika[4] ++;
			break;
		case 5:
			Statistika[5] ++;
			break;
		case 6:
			Statistika[6] ++;
			break;
		case 7:
			Statistika[7] ++;
			break;
		case 8:
			Statistika[8] ++;
			break;
		case 9:
			Statistika[9] ++;
			break;
		case 10:
			Statistika[10] ++;
			break;
		}		
	}

	// ����������� ��������� ������������ ������ ����� � ������� �� ���� � ���� ����������������� �����������
	for (int i = 0; i < 10; i++)
	{
		Statistika[i] = Statistika[i] * 100 / (sizeof(Array) / sizeof(*Array));
		for (int n = 0; n < Statistika[i]; n++)
			cout << '*';
		cout << "    " << Statistika[i] << "%";
		cout << endl;
	}	
	system("pause");
}

