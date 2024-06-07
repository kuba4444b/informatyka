#include <iostream>
#include <vector>

int main() {
    int kwota;
    std::cout << "Podaj kwotę do wydania: ";
    std::cin >> kwota;

    std::vector<int> nominaly = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };

    for (int nom : nominaly) {
        if (kwota >= nom) {
            int ile = kwota / nom;
            kwota -= nom * ile;
            std::cout << "Nominał: " << nom << " zł - Ilość: " << ile << std::endl;
        }
    }

    return 0;
}
