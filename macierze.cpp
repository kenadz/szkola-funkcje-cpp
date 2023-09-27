#include <iostream>

using namespace std;

int main()
{
	int n, m, k;

	cout << "Podaj liczby n i m (wymiar macierzy):" << endl;
	cin >> n >> m;

	int a[m][n], b[n][m], c[m][m];

	cout << "Wprowadz elementy macierzy A:" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	cout << "Wprowadz elementy macierzy B:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> b[i][j];
		}
	}
	
// suma macierzy
	/*
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	cout << "Macierz A + B: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << c[i][j] << "\t";
		}
		cout << endl;
	}
	*/

// Iloczyn macierzy A i B
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < n; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	cout << "Macierz wynikowa C (iloczyn A i B):" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << c[i][j] << "\t";
		}
		cout << endl;
	}

	cout << "Wybierz opcje:" << endl;
	cout << "1. Mnozenie macierzy A przez skalar" << endl;
	cout << "2. Mnozenie macierzy B przez skalar" << endl;

	int opcja;
	cin >> opcja;

	if (opcja == 1)
	{
		cout << "Podaj skalar: ";
		cin >> k;

// Mnożenie macierzy A przez skalar
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				a[i][j] *= k;
			}
		}

		cout << "Macierz A po mnozeniu przez skalar " << k << ":" << endl;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << a[i][j] << "\t";
			}
			cout << endl;
		}
	}
	else if (opcja == 2)
	{
		cout << "Podaj skalar: ";
		cin >> k;

// Mnożenie macierzy B przez skalar
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				b[i][j] *= k;
			}
		}

		cout << "Macierz B po mnozeniu przez skalar " << k << ":" << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << b[i][j] << "\t";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Niepoprawna opcja." << endl;
	}

	return 0;
}
