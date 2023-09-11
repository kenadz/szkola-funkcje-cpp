#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void sprawdz_czy_pierwsza(int &poczatek, int &koniec, int &suma, int &ilosc)
{
	if(poczatek <= 2) poczatek = 2;
	vector<int> liczbyPierwsze;

	for(int i=poczatek; i<=koniec; i++)
    {
		bool pierwsza = true;
		if(i <= 2) pierwsza = false;
		
		for(int j = 2; j*j<=i; j++)
		{
			if(i % j == 0)
			{
				pierwsza = false;
				break;
			}
		}
		if (pierwsza)
		{
			liczbyPierwsze.push_back(i);
			ilosc += 1;
		}
	}
	suma = 0;
	cout << "Liczby pierwsze w przedziale od " << poczatek << " do " << koniec << " to:" << endl;
	for(int liczba : liczbyPierwsze)
	{
		suma += liczba;
		cout << liczba << endl;
	}
	cout << endl;
	cout << "suma: " << suma << endl;
	cout << "ilosc: " << ilosc;
}

int main()
{
	int n, m, suma, ilosc;
	cin >> n;
	cin >> m;
	cout << endl;
	sprawdz_czy_pierwsza(n, m, suma, ilosc);
	return 0;
}
