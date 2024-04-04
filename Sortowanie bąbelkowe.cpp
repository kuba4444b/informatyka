#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) { // Funkcja sortująca wektor liczb całkowitych metodą sortowania bąbelkowego
    int n = arr.size(); // Rozmiar wektora
    for (int i = 0; i < n; ++i) { // Pętla iterująca przez wszystkie elementy wektora
        for (int j = 1; j < n - i; ++j) { // Pętla iterująca wewnątrz, porównująca sąsiednie elementy
            if (arr[j - 1] > arr[j]) { // Jeśli obecny element jest większy od następnego
                swap(arr[j - 1], arr[j]); // Zamień miejscami obecny i następny element
            }
        }
    }
}

int main() {
    vector<int> arr = { 21, 57, 54, 92, 89, 24, 99, 19, 20, 63 }; // Inicjalizacja wektora liczb całkowitych

    cout << "Tablica przed sortowaniem:\n"; // Wyświetlenie zawartości wektora przed sortowaniem
    for (int num : arr) cout << num << " | ";
    cout << endl;

    bubbleSort(arr); // Wywołanie funkcji sortującej

    cout << "\nTablica po sortowaniu:\n"; // Wyświetlenie zawartości wektora po sortowaniu
    for (int num : arr) cout << num << " | ";
    cout << endl;

    return 0;
}
