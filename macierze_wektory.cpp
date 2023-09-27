#include <iostream>
#include <vector>

using namespace std;

// Funkcja do wczytywania macierzy
vector<vector<int>> wczytajMacierz(int m, int n) {
    vector<vector<int>> macierz(m, vector<int>(n, 0));

    cout << "Wprowadz elementy macierzy:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> macierz[i][j];
        }
    }

    return macierz;
}

// Funkcja do wyświetlania macierzy
void wyswietlMacierz(const vector<vector<int>>& macierz) {
    int m = macierz.size();
    int n = macierz[0].size();

    cout << "Macierz:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << macierz[i][j] << "\t";
        }
        cout << endl;
    }
}

// Funkcja do mnożenia macierzy przez skalar
vector<vector<int>> pomnozMacierzPrzezSkalar(const vector<vector<int>>& macierz, int k) {
    int m = macierz.size();
    int n = macierz[0].size();

    vector<vector<int>> wynik(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            wynik[i][j] = macierz[i][j] * k;
        }
    }

    return wynik;
}

// Funkcja do mnożenia macierzy A i B
vector<vector<int>> pomnozMacierze(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int m = A.size();
    int n = A[0].size();
    int p = B[0].size();

    vector<vector<int>> wynik(m, vector<int>(p, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                wynik[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return wynik;
}

int main() {
    int n, m;

    cout << "Podaj liczby n i m (wymiar macierzy):" << endl;
    cin >> m >> n;

    vector<vector<int>> A = wczytajMacierz(m, n);
    vector<vector<int>> B = wczytajMacierz(m, n);

    wyswietlMacierz(A);
    wyswietlMacierz(B);

    cout << endl;
    cout << "Wybierz opcje:" << endl;
    cout << "1. Mnozenie macierzy A przez skalar" << endl;
    cout << "2. Mnozenie macierzy B przez skalar" << endl;
    cout << "3. Mnozenie macierzy A i B" << endl;

    int opcja;
    cin >> opcja;

    if (opcja == 1) {
        int k;
        cout << "Podaj skalar: ";
        cin >> k;
        vector<vector<int>> wynik = pomnozMacierzPrzezSkalar(A, k);
        wyswietlMacierz(wynik);
    } else if (opcja == 2) {
        int k;
        cout << "Podaj skalar: ";
        cin >> k;
        vector<vector<int>> wynik = pomnozMacierzPrzezSkalar(B, k);
        wyswietlMacierz(wynik);
    } else if (opcja == 3) {
        if (n != m) {
            cout << "Liczba kolumn macierzy A musi byc rowna liczbie wierszy macierzy B." << endl;
        } else {
            vector<vector<int>> wynik = pomnozMacierze(A, B);
            wyswietlMacierz(wynik);
        }
    } else {
        cout << "Niepoprawna opcja." << endl;
    }

    return 0;
}
