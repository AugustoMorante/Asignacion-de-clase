
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
	char *Vocal;
	Vocal = new char[5];

	for (int i = 0;i<5;i++)
	{
		cout << "Letra " << i + 1 << ": ";
		cin >> Vocal[i];
		if (Vocal[i] == 'A' || Vocal[i] == 'E' || Vocal[i] == 'I' || Vocal[i] == 'O' || Vocal[i] == 'U' || Vocal[i] == 'a' || Vocal[i] == 'e' || Vocal[i] == 'i' ||  Vocal[i] == 'o' || Vocal[i] == 'u')
		{
			continue;
		}
		else
		{
			Vocal[i] = '0';
		}
	}
	cout << endl;
	for (int i = 4;i >= 0;i--)
	{
		cout << "Letra " << i + 1 << " es : " << Vocal[i] << endl;
	}
	_getch();
}