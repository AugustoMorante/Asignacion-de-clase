
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
	double *VNotas;
	VNotas = new double[15];

	for (int i = 0;i<15;i++)
	{
		cout << "Ingrese Nota " << i + 1 << ": ";
		cin >> VNotas[i];
		if (VNotas[i] > 20 || VNotas[i] < 0)
		{
			VNotas[i] = 0;
		}
	}
	cout << endl;
	for (int i = 14;i >= 0;i--)
	{
		cout << "Nota " << i + 1 << " es : " << VNotas[i] << endl;
	}
	_getch();
}