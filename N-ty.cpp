#include <iostream>

double funkcja(int n);

int main() {
    int n;
    std::cout << "Podaj nr wyrazu ciagu, ktorego wartosc chcesz policzyc: ";
    std::cin >> n;

    double wynik = funkcja(n);

    std::cout << n << " wyraz ciagu ma wartosc " << wynik << std::endl;

    return 0;
}

double funkcja(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 0.5;
    }
    else {
        return -funkcja(n - 1) * funkcja(n - 2);
    }
}   
