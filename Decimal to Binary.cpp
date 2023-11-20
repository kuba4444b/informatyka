#include <iostream>

void decToBinary(int n) {

    int binaryNum[32];

    int i = 0;

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        std::cout << binaryNum[j];
    }
}

int main() {
    int decimalNum;
    std::cout << "Podaj liczbe dziesietna: ";
    std::cin >> decimalNum;

    std::cout << "Reprezentacja binarna: ";
    decToBinary(decimalNum);

    return 0;
}
