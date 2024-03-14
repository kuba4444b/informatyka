#include <iostream>
#include <vector>

void bubbleSort(std::vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n - i; ++j) {
            if (arr[j - 1] > arr[j]) {
                std::swap(arr[j - 1], arr[j]);
            }
        }
    }
}

int main() {
    std::vector<int> arr = {21, 57, 54, 92, 89, 24, 99, 19, 20, 63};

    std::cout << "Tablica przed sortowaniem:\n";
    for (int num : arr) {
        std::cout << num << " | ";
    }
    std::cout << std::endl;

    std::cout << "\nRozpoczecie sortowania...\n";
    bubbleSort(arr);

    std::cout << "\nTablica po sortowaniu:\n";
    for (int num : arr) {
        std::cout << num << " | ";
    }
    std::cout << std::endl;

    return 0;
}
