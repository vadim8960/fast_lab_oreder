#include <iostream>
#include <cstdlib>

using namespace std;

int *create_array(int n) {
    int *arr = (int *)malloc(n * sizeof(int));
    cout << "Enter array: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    return arr;
}

void remove_element(int *arr, int &n, int ind) {
    for (int i = ind; i < n - 1; ++i)
        arr[i] = arr[i + 1];
    --n;
    arr = (int *)realloc(arr, n * sizeof(n));
}

void print_array(int *arr, int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
    cout << endl;
}

int main() {
    cout << "Enter size: ";
    int n;
    cin >> n;
    int *arr = create_array(n);

    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            remove_element(arr, n, i);
            --i;
        }
    }

    print_array(arr, n);

    free(arr);
    return 0;
}
