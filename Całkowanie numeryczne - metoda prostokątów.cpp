#include <iostream>
double f(double x) {
    return x * x + x + 2;
}

// Funkcja obliczająca pole obszaru ograniczonego wykresem
    double obliczPole(double a, double b, int n) {
        double x = (b - a) / n;
        double S = 0;
        double srodek = a + (b - a) / (2.0 * n);

     for (int i = 0; i < n; ++i) {
          S += f(srodek);
          srodek += x; //+= używamy gdzy np. chcemy dodac x do y
      }

    return S * x; //return służy do zakończenia funkcji i zwrócenia wartości
}

    int main() { //double to jeden z typów danych liczbowych, double oznacza że zmiena może przechowywać liczby rzeczywiste z dużą precyzją
        double a, b;
        int n;

    std::cout << "Podaj przedzial [a, b]" << std::endl; // użytkownik podaje dane/palametry
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "Podaj liczbe trapezow: ";
    std::cin >> n;

        double pole = obliczPole(a, b, n); //Obliczenie i wyświetlenie wyniku
         std::cout << "Pole figury wynosi: " << pole << std::endl;

    return 0;
}
