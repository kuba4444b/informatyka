#include <iostream>

int main() {
    int n;
    std::cout << "Ile wyrazow ciagu wypisac: ";
    std::cin >> n;

    int f0 = 0, f1 = 1;

    for (int i = 0; i < n; ++i, f1 += f0, f0 = f1 - f0) {
        std::cout << f0 << std::endl;
    }

    return 0;
}
