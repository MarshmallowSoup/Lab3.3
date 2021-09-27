// Lab_03_3.cpp
// Лисецький Володимир
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 12

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	double x, R, y;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= -6)
		y = R;
	if (x > -6 && x <= -R)
		y = (R * (x + 6) / (6 - R) - 1);
	if (x > -R && x <= 0)
		y = R - sqrt(R * R - (x + R) * (x + R));
	if (x > 0 && x <= R)
		y = sqrt(R * R - x * x);
	if (x > R)
		y = R - x;

	cout << "y = " << y << endl;
	cin.get();
	return 0;
}

