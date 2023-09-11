#include <iostream>
#include <cmath>

using namespace std;

void dz(int x, int &l, int &s)
{
	l = 0;
	s = 0;

	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			cout << i << ' ';
			l++;
			s += i;
		}
	}
	cout << endl;
}

int main()
{
	int a;
	int l1, l2;
	cin >> a;
	dz(a, l1, l2);
	cout << "Ilosc dzielnikow: " << l1 << endl;
	cout << "Suma dzielnikow: " << l2 << endl;
}
