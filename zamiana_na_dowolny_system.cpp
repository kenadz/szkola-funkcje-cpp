#include <iostream>
using namespace std;

void zamiana(int liczba, int system)
{
	if (liczba == 0)
	{
		return;
	}
	int wynik = liczba % system;
	liczba /= system;
	zamiana(liczba, system);
	if (wynik < 10)
	{
		cout << wynik;
	}
	else
	{
		char litera = wynik + 55;
		cout << litera;
	}
}

int main()
{
	int liczba, system;
	cout << "Podaj liczbe w systemie dziesietnym: ";
	cin >> liczba;
	cout << "Na jaki system liczbowy chcesz zamienic liczbe <2,16>: ";
	cin >> system;
	cout << "Wynik: ";
	zamiana(liczba, system);
	cout << endl;
	return 0;
}
