// ConsoleApplication6.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream> 
#include <sstream>
#include <string>
using namespace std;

// ����� �������� ���������

void main()
{
	int number;
	cout<<"Enter value \n";
	cin >> number;
	// ��������� ���� �������� � �������. ������������ ����� � ������.
	//���� ����� ����������� ���������� ������ 8, �� ����� ��������� ����
	// �� ���������� ������ ���� �������� 4 ����� ������� � 2-� �������. ������� �� ����� ���������� ��������
	// ���������� 4-� ������� ���� ����� ����������� �� ������ � ����� � ��������� ����
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

