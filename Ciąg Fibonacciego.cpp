#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ile wyrazow ciagu wypisac: ";
    cin >> n;

    int f0 = 0, f1 = 1;
    // Pierwszy wyraz jest równy 0, drugi jest równy 1, każdy następny jest sumą dwóch poprzednich
    for (int i = 0; i < n; ++i, f1 += f0, f0 = f1 - f0) {
        cout << f0 << endl;
    }

    return 0;
}
