#include <iostream>
#include <string>

using namespace std;

// funkcja konwertująca liczbę dziesiętną na szesnastkową
string dziesietna_na_szesnastkowa(int liczba) {
    string wynik;
    while (liczba != 0) {
        int reszta = liczba % 16;
        if (reszta < 10) {
            wynik = char(reszta + '0') + wynik;
        } else {
            wynik = char(reszta - 10 + 'A') + wynik;
        }
        liczba /= 16;
    }
    if (wynik.empty()) {
        wynik = "0";
    }
    return wynik;
}

int main() {
    int liczba;
    cout << "Podaj liczbę dziesiętną: ";
    cin >> liczba;

    string wynik = dziesietna_na_szesnastkowa(liczba);

    cout << "Liczba szesnastkowa: " << wynik << endl;

    return 0;
}