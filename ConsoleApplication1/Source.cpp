#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
start:
	int x;
	cout << " ������� ����� �������: ";
	cin >> x;
	if (x == 1)
	{
		int x, y, z;
		cout << " ������� x: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		cout << " ������� z: ";
		cin >> z;
		if ((x % 5==0) || (y % 5==0) || (z % 5==0))
			cout << " ������ ";
		else
			cout << " ���� ";
	}
	if (x == 2)
	{
		int x, y, z;
		cout << " ������� x: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		cout << " ������� z: ";
		cin >> z;
		if ((x > 80) || (y > 80) || (z > 80))
			cout << " ������ ";
		else
			cout << " ���� ";
	}
	if (x == 3)
	{
		int a;
		cout << " ������� �: ";
		cin >> a;
		if ((a < -10) || (a > -1))
			cout << " ����� �� ����������� ��������� �� -10 �� -1 ";
		else if ((a < 2) || (a > 15))
			cout << " ����� �� ����������� ��������� �� 2 �� 15 ";
		else
			cout << " ������ � �������� ";
	}
	if (x == 4)
	{
		int a;
		cout << " ������� �: ";
		cin >> a;
		if (((a > 999) || (a < 10000)) && (a != 4999))
			cout << " ������ ";
		else
			cout << " ���� ";
	}
	if (x == 5)
	{
		float a, b, c, d, e, f;
		cout << " ������� a: ";
		cin >> a;
		cout << " ������� b: ";
		cin >> b;
		cout << " ������� c: ";
		cin >> c;
		cout << " ������� d: ";
		cin >> d;
		e = a / b;
		f = c / d;
		if (e > f)
			cout << " A/B > C/D " "\n";
		else
			cout << " A/B < C/D " "\n";
	}
	if (x == 6)
	{
		int x, y;
		cout << " ������� x(1-8): ";
		cin >> x;
		cout << " ������� y(1-8): ";
		cin >> y;
		if ((x % 2 == 0) && (y % 2))
			cout << " ������ ���� �������� ����� ";
		else if ((x % 2) && (y % 2 == 0))
			cout << " ������ ���� �������� ����� ";
		else
			cout << " ������ ���� �������� ������ "; 
	}

	if (x == 7)
	{
		int x, y;
		cout << " ������� x: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		if ((x > 2) && (y > 3))
			cout << " ������: " << endl;
		else
			cout << " ����: " << endl;
	}
	if (x == 8)
	{
		int x, y;
		cout << " ������� x: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		if ((x > 1) && (y > -2))
			cout << " ������: " << endl;
		else
			cout << " ����: " << endl;
	}
	if (x == 9)
	{
		int x, y;
		cout << " ������� x: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		if ((x >= 0) && (y < 5))
			cout << " ������: " << endl;
		else
			cout << " ����: " << endl;
	}
	if (x == 9)
	{
		int x, y;
		cout << " ������� x: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		if ((x > 3) && (y < -1))
			cout << " ������: " << endl;
		else
			cout << " ����: " << endl;
	}
	if (x == 10)
	{
		int x, y;
		cout << " ������� x: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		if ((x > 3) && (y < 10))
			cout << " ������: " << endl;
		else
			cout << " ����: " << endl;
	}
	if (x == 11)
	{
		int x, y;
		cout << " ������� x: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		if ((x > 1) || (y > -2))
			cout << " ������: " << endl;
		else
			cout << " ����: " << endl;
	}
	if (x == 12)
	{
		int x, y;
		cout << " ������� x: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		if ((x < 20) || (y < 20))
			cout << " ������: " << endl;
		else
			cout << " ����: " << endl;
	}
	if (x == 13)
	{
		int x, y;
		cout << " ������� x: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		if ((x == 0) || (y == 0))
			cout << " ������: " << endl;
		else
			cout << " ����: " << endl;
	}
	if (x == 14)
	{
		int x, y, z;
		cout << " ������� x: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		cout << " ������� z: ";
		cin >> z;
		if ((x < 0) && (y < 0) && (z < 0))
			cout << " ������: " << endl;
		else
			cout << " ����: " << endl;
	}
	if (x == 15)
	{
		int x, y, z;
		cout << " ������� x: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		cout << " ������� z: ";
		cin >> z;
		if ((x % 5==0) || (y % 5==0) || (z % 5==0))
			cout << " ������: " << endl;
		else
			cout << " ����: " << endl;
	}
	if (x == 16)
	{
		int x, y, z;
		cout << " ������� x: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		cout << " ������� z: ";
		cin >> z;
		if ((x > 100) || (y > 100) || (z > 100))
			cout << " ������: " << endl;
		else
			cout << " ����: " << endl;
	}
}