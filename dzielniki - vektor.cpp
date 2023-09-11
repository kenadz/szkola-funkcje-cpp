#include <iostream>
#include <vector>

using namespace std;

void dz(int x, int &l, int &s)
{
    vector<int> dzielniki;

    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            dzielniki.push_back(i);
        }
    }

    l = dzielniki.size();
    s = 0;

    for (int dzielnik : dzielniki)
    {
        s += dzielnik;
    }
}

int main()
{
    int a;
    int l1, l2;
    cin >> a;
    dz(a, l1, l2);
    cout << "Iloœæ dzielników: " << l1 << endl;
    cout << "Suma dzielników: " << l2 << endl;
}

