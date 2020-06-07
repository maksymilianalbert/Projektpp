#include <iostream>
#include "Szyfr.h"
using namespace std;

void Szyfr::szyfruj(char wiad[100],char zn, int a, int klucz) {
	cout << "Wprowadz slowo do enkrypcji: ";
	cin.getline(wiad, 100);
	cout << "Podaj klucz szyfrowania: ";
	cin >> klucz;

	for (a = 0; wiad[a] != '\0'; ++a) {
		zn = wiad[a];

		if (zn >= 'a' && zn <= 'z') {
			zn = zn + klucz;

			if (zn > 'z') {
				zn = zn - 'z' + 'a' - 1;
			}

			wiad[a] = zn;
		}
		else if (zn >= 'A' && zn <= 'Z') {
			zn = zn + klucz;

			if (zn > 'Z') {
				zn = zn - 'Z' + 'A' - 1;
			}

			wiad[a] = zn;
		}
	}

	cout << "Rozszyfrowana wiadmosc: " << wiad;
}
void Szyfr::deszyfruj(char wiad[100], int klucz, char zn, int a) {
	cout << "Wprowadz tekst do dekyrpcji: ";
	cin.getline(wiad, 100);
	cout << "Podaj klucz: ";
	cin >> klucz;

	for (a = 0; wiad[a] != '\0'; ++a) {
		zn = wiad[a];

		if (zn >= 'a' && zn <= 'z') {
			zn = zn - klucz;

			if (zn < 'a') {
				zn = zn + 'z' - 'a' + 1;
			}

			wiad[a] = zn;
		}
		else if (zn >= 'A' && zn <= 'Z') {
			zn = zn - klucz;

			if (zn > 'a') {
				zn = zn + 'Z' - 'A' + 1;
			}

			wiad[a] = zn;
		}
	}

	cout << "Zaszyfrowana wiadomosc: " << wiad;

}


