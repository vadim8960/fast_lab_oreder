#include <iostream>
#include <cstring>

using namespace std;

void print_array(int* arr, int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
    cout << endl;
}

void resize_array(int* arr, int new_size) {
    int *tmp = new int[new_size];
    memcpy(tmp, arr, new_size * sizeof(int));
    delete [] arr;
    arr = new int[new_size];
    memcpy(arr, tmp, new_size * sizeof(int));
    delete [] tmp;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int min = INT32_MAX;
    for (int i = 0; i < n; ++i)
        if (min > arr[i])
            min = arr[i];

    for (int i = 0; i < n; ++i) {
        if (arr[i] == min) {
            for (int j = i; j < n - 1; ++j)
                arr[j] = arr[j + 1];
            --n;
            resize_array(arr, n);
            --i;
        }
    }

    print_array(arr, n);

    delete [] arr;
    return 0;
}