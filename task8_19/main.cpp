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

void insert_element(int *arr, int &n, int ind, int elem) {
    ++n;
    arr = (int *)realloc(arr, n * sizeof(n));
    for (int i = n - 1; i > ind; --i)
        arr[i] = arr[i - 1];
    arr[ind] = elem;
}

void print_array(int *arr, int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
    cout << endl;
}

int main() {
    cout << "Enter size, x, y: ";
    int n, x, y;
    cin >> n >> x >> y;
    int *arr = create_array(n);

    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            insert_element(arr, n, i, y);
            ++i;
        }
    }

    print_array(arr, n);

    free(arr);
    return 0;
}
