#include <iostream>
#include <vector>

int main() {
    int kwota;
    std::cout << "Podaj kwote do wydania: ";
    std::cin >> kwota;

    // K1: Lista dostępnych nominałów
    std::vector<int> nominaly = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };

    // K2: Dopóki kwota > 0
    for (int i = 0; i < nominaly.size() && kwota > 0; ++i) {
        // K3: Jeśli kwota >= nominaly[i]
        if (kwota >= nominaly[i]) {
            // K4: ile razy wydać dany nominał
            int ile = kwota / nominaly[i];
            // K5: Zmniejsz resztę o dany nominał
            kwota -= nominaly[i] * ile;
            // K6: Wypisz nominał i ile razy
            std::cout << "Nominał: " << nominaly[i] << " zł - Ilość: " << ile << std::endl;
        }
        // K7: rozpatrz kolejny nominał
    }

    // K8: Zakończ
    return 0;
}
