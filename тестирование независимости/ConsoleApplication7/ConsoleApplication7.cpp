// ConsoleApplication7.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream> 
#include <sstream>
#include <string>
using namespace std;


void main()
{
	int s;
	int step;
	int sum=0;
	cout << "Enter step \n";
	cin >> step;
	cout << "Enter value \n";
	cin >> s;
	int Array[100] = {};
// ��� ������ �������� ���������. ��� ������ ��� ���� ������� � ���������� �������
	for (int i = 0; i < 100; i++)
	{
		s = s*s;
		ostringstream number;
		number << s;
		string str1 = number.str();

		if (str1.length() < 8)
		{
			str1 = "0" + str1;
		}

		str1 = str1.substr(2, 4);
		cout << str1 << "\n";
		istringstream ist(str1);
		ist >> s;
		Array[i] = s;
	}
     
	// ��������� ����� ���� �������� � ������ ���� � ����� �� �����
	for (int i = 0; i < 100 - step; i++)
	{
		sum += (Array[i] * Array[i + step]);
		
	}
	cout << sum<<"\n"; 
	//������ ���������� ���������� � ����� �� �����
	double R = (12 * sum / (100 - step)) - 3;
	(R >= -1) ? cout << -1 : cout << R;
 
	system("pause");
}

