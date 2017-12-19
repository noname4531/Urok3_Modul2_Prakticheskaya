#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
start:
	int x;
	cout << " ¬ведите номер задани€: ";
	cin >> x;
	if (x == 1)
	{
		int x, y, z;
		cout << " ¬ведите x: ";
		cin >> x;
		cout << " ¬ведите y: ";
		cin >> y;
		cout << " ¬ведите z: ";
		cin >> z;
		if ((x % 5==0) || (y % 5==0) || (z % 5==0))
			cout << " »стина ";
		else
			cout << " Ћожь ";
	}
	if (x == 2)
	{
		int x, y, z;
		cout << " ¬ведите x: ";
		cin >> x;
		cout << " ¬ведите y: ";
		cin >> y;
		cout << " ¬ведите z: ";
		cin >> z;
		if ((x > 80) || (y > 80) || (z > 80))
			cout << " »стина ";
		else
			cout << " Ћожь ";
	}
	if (x == 3)
	{
		int a;
		cout << " ¬ведите а: ";
		cin >> a;
		if ((a < -10) || (a > -1))
			cout << " „исло не принадлежит интервалу от -10 до -1 ";
		else if ((a < 2) || (a > 15))
			cout << " „исло не принаджлеит интервалу от 2 до 15 ";
		else
			cout << " ¬ходит в интервал ";
	}
	if (x == 4)
	{
		int a;
		cout << " ¬ведите а: ";
		cin >> a;
		if (((a > 999) || (a < 10000)) && (a != 4999))
			cout << " »стина ";
		else
			cout << " Ћожь ";
	}
	if (x == 5)
	{
		float a, b, c, d, e, f;
		cout << " ¬ведиет a: ";
		cin >> a;
		cout << " ¬ведите b: ";
		cin >> b;
		cout << " ¬ведите c: ";
		cin >> c;
		cout << " ¬ведите d: ";
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
		cout << " ¬ведите x(1-8): ";
		cin >> x;
		cout << " ¬ведите y(1-8): ";
		cin >> y;
		if ((x % 2 == 0) && (y % 2))
			cout << " ƒанное поле €вл€етс€ белым ";
		else if ((x % 2) && (y % 2 == 0))
			cout << " ƒанное поле €вл€етс€ белым ";
		else
			cout << " ƒанное поле €вл€етс€ черным "; 
	}

	if (x == 7)
	{
		int x, y;
		cout << " ¬ведите x: ";
		cin >> x;
		cout << " ¬ведиет y: ";
		cin >> y;
		if ((x > 2) && (y > 3))
			cout << " »стина: " << endl;
		else
			cout << " Ћожь: " << endl;
	}
	if (x == 8)
	{
		int x, y;
		cout << " ¬ведите x: ";
		cin >> x;
		cout << " ¬ведиет y: ";
		cin >> y;
		if ((x > 1) && (y > -2))
			cout << " »стина: " << endl;
		else
			cout << " Ћожь: " << endl;
	}
	if (x == 9)
	{
		int x, y;
		cout << " ¬ведите x: ";
		cin >> x;
		cout << " ¬ведиет y: ";
		cin >> y;
		if ((x >= 0) && (y < 5))
			cout << " »стина: " << endl;
		else
			cout << " Ћожь: " << endl;
	}
	if (x == 9)
	{
		int x, y;
		cout << " ¬ведите x: ";
		cin >> x;
		cout << " ¬ведиет y: ";
		cin >> y;
		if ((x > 3) && (y < -1))
			cout << " »стина: " << endl;
		else
			cout << " Ћожь: " << endl;
	}
	if (x == 10)
	{
		int x, y;
		cout << " ¬ведите x: ";
		cin >> x;
		cout << " ¬ведиет y: ";
		cin >> y;
		if ((x > 3) && (y < 10))
			cout << " »стина: " << endl;
		else
			cout << " Ћожь: " << endl;
	}
	if (x == 11)
	{
		int x, y;
		cout << " ¬ведите x: ";
		cin >> x;
		cout << " ¬ведиет y: ";
		cin >> y;
		if ((x > 1) || (y > -2))
			cout << " »стина: " << endl;
		else
			cout << " Ћожь: " << endl;
	}
	if (x == 12)
	{
		int x, y;
		cout << " ¬ведите x: ";
		cin >> x;
		cout << " ¬ведиет y: ";
		cin >> y;
		if ((x < 20) || (y < 20))
			cout << " »стина: " << endl;
		else
			cout << " Ћожь: " << endl;
	}
	if (x == 13)
	{
		int x, y;
		cout << " ¬ведите x: ";
		cin >> x;
		cout << " ¬ведиет y: ";
		cin >> y;
		if ((x == 0) || (y == 0))
			cout << " »стина: " << endl;
		else
			cout << " Ћожь: " << endl;
	}
	if (x == 14)
	{
		int x, y, z;
		cout << " ¬ведите x: ";
		cin >> x;
		cout << " ¬ведиет y: ";
		cin >> y;
		cout << " ¬ведите z: ";
		cin >> z;
		if ((x < 0) && (y < 0) && (z < 0))
			cout << " »стина: " << endl;
		else
			cout << " Ћожь: " << endl;
	}
	if (x == 15)
	{
		int x, y, z;
		cout << " ¬ведите x: ";
		cin >> x;
		cout << " ¬ведиет y: ";
		cin >> y;
		cout << " ¬ведите z: ";
		cin >> z;
		if ((x % 5==0) || (y % 5==0) || (z % 5==0))
			cout << " »стина: " << endl;
		else
			cout << " Ћожь: " << endl;
	}
	if (x == 16)
	{
		int x, y, z;
		cout << " ¬ведите x: ";
		cin >> x;
		cout << " ¬ведиет y: ";
		cin >> y;
		cout << " ¬ведите z: ";
		cin >> z;
		if ((x > 100) || (y > 100) || (z > 100))
			cout << " »стина: " << endl;
		else
			cout << " Ћожь: " << endl;
	}
}