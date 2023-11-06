#include <iostream>

unsigned long long silnia(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * silnia(n - 1);
    }
}

int main() {
    int n;
    std::cout << "Podaj liczbe, dla ktorej chcesz obliczyc silnie: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Silnia nie jest zdefiniowana dla liczby ujemnej." << std::endl;
    }
    else {
        unsigned long long wynik = silnia(n);
        std::cout << "Silnia " << n << " wynosi: " << wynik << std::endl;
    }

    return 0;
}
