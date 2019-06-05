
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void Determinar_area_perimetro(double l)
{
	double a, p;
	a = pow(l, 2);
	p = l * 4;
	cout << "Area del cuadrado: " << a << endl;
	cout << "Perimetro del cuadrado: " << p << endl;
	return;
}

int main()
{
	double l;
	while (1)
	{
		do
		{
			cout << "Inserte lado del cuadradro: "; cin >> l;
		} while (l < 1);
		Determinar_area_perimetro(l);
		cout << endl;
	}
	_getch();
}


