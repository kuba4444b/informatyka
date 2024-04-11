#include <iostream>

int main() {
    int n;
    std::cout << "Ile wyrazow ciagu wypisac: ";
    std::cin >> n;

    int f0 = 0, f1 = 1;

    for (int i = 0; i < n; ++i) { //wykonanie tego 0 1 1 2 3 5 8...
        std::cout << f0 << std::endl;
        int next_fib = f0 + f1;
        f0 = f1;
        f1 = next_fib;
    }

    return 0;
}
