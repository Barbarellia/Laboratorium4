#include <iostream>
#include<iomanip>
#include "Header.h"
using namespace std;

int main()
{
	double tab[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	cout << antyprzekatna(tab) << endl;

	/// wyjasnienie petli
	cout << sizeof(tab) << endl; //16 - ile pamieci na cala tablice
	cout << sizeof(tab[0][0]) << endl;//4 - ile pamieci na 1 element wiersza
	cout << sizeof(tab[0]) << endl;//8 - ile pamieci na caly wiersz
	cout << sizeof(tab[0]) / sizeof(tab[0][0]) << endl; // liczba kolumn

}
