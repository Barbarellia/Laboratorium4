#include <iostream>
#include<iomanip>
using namespace std;

int zliczLiteryA(char tekst[]) {
	int sumaA = 0;
	//for (int i = 0; tekst[i] != '\0'; i++)
	for (int i = 0; i <= strlen(tekst); i++) {
		if (tekst[i] == 'a' || tekst[i] == 'A')
			sumaA++;
	}
	return sumaA;
}

int zliczZnak(char tekst[], char znak) {
	int suma = 0;
	for (int i = 0; i <= strlen(tekst); i++) {
		if (tekst[i] == znak)
			suma++;
	}
	return suma;
}

void statystykaTekstu(char tekst[]) {
	int i = 0;
	int sumaLiter{}, sumaCyfr{}, sumaSpacji{}, sumaInne{};
	while (tekst[i]) {
		if (isalpha(tekst[i]))
			sumaLiter++;
		else if (isdigit(tekst[i]))
			sumaCyfr++;
		else if (isspace(tekst[i]))
			sumaSpacji++;
		else
			sumaInne++;
		i++;
	}

	cout << "Suma liter wynosi: " << sumaLiter << endl;
	cout << "Suma cyfr wynosi: " << sumaCyfr << endl;
	cout << "Suma spacji wynosi: " << sumaSpacji << endl;
	cout << "Suma innych znakow wynosi: " << sumaInne << endl;
}

void wypiszBinarnie(int n) {
	//wyjasnienie jak dziala przesuniecie bitowe
	//przesuniecie bitowe w lewo o 30
	//czyli zapelniamy reszte miejsc 1, bo 2^30 = i
	int i = 1 << 30;
	cout << i;
	long j = pow(2, 31);
	cout << endl << j << endl;

	//wypisz 0 w miejscu 2^32, czyli pierwszym bicie
	cout << "0";
	int suma = 1;
	//idziemy od bitu 2^30 w dol
	//czyli iteracyjnie dzielimy 2^30 przez 2
	for (int i = 1 << 30; i > 0; i = i / 2) {
		if (suma % 8 == 0)
			cout << " ";
		suma++;
		// jezeli operacja AND dla danego bitu zwraca 1
		// czyli oba bity sa 1
		if ((n & i) != 0)
			cout << "1";
		else
			cout << "0";
	}
}

double antyprzekatna(double tab[4][4]) {
	int wynik = 1;
	int wymiar = sizeof(tab[0]) / sizeof(tab[0][0]);
	for (int i = 0; i < wymiar; i++) {
		wynik*= tab[i][wymiar-i-1];
	}
	return wynik;
}