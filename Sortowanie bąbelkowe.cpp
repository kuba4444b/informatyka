#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n - i; ++j) {
            if (arr[j - 1] > arr[j]) {
                swap(arr[j - 1], arr[j]);
            }
        }
    }
}

int main() {
    vector<int> arr = {21, 57, 54, 92, 89, 24, 99, 19, 20, 63};

    cout << "Tablica przed sortowaniem:\n";
    for (int num : arr) {
        cout << num << " | ";
    }
    cout << endl;

    cout << "\nRozpoczecie sortowania...\n";
    bubbleSort(arr);

    cout << "\nTablica po sortowaniu:\n";
    for (int num : arr) {
        cout << num << " | ";
    }
    cout << endl;

    return 0;
}
