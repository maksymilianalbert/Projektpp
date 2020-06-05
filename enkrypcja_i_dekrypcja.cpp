#include<iostream>

using namespace std;

int main()




{
	char wiad[100], zn;
	int a, klucz, b;

	cout << " jeżeli chcesz dokonac enkrypcji wpisz 1" << endl;
	cout << "jezeli chcesz dokonac dekrypcji wpisz 0" << endl;
	cin >> b;

	if (b == 1)
	{

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

		return 0;



	}
	else(b == 0) {

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

		return 0;
	}

}

