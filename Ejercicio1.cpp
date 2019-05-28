
#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	int *pares;
	pares = new int[15];
	int aux;

	for (int i = 0; i<15; i++)
	{
		cout << "Ingrese numero " << i + 1 << ": ";
		cin >> aux;
		if (aux % 2 == 0)
		{
			pares[i] = aux;
		}
		else {
			pares[i] = 0;
		}
	}

	cout << endl;
	 
	for (int i = 0;i<15;i++)
		cout << "Si es 0 no es par: " << pares[i] << "\n";

	delete[]pares;
	_getch();
}

