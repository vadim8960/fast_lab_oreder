#include <iostream>
#include <iomanip>

using namespace std;

template <typename T>
T** create_matrix(int n, int m) {
    T** retv = new T*[n];
    for (int i = 0; i < n; ++i)
        retv[i] = new T[m];
    return retv;
}

template <typename T>
void remove_matrix(T** matr, int n) {
    for (int i = 0; i < n; ++i)
        delete [] matr[i];
    delete [] matr;
}

template <typename T>
T** read_matrix(int n, int m) {
    T** retv = create_matrix<T>(n, m);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> retv[i][j];
    return retv;
}

template <typename T>
void print_matrix(T** matr, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cout << setw(3) << matr[i][j] << ' ';
        cout << endl;
    }
}

template <typename T>
void swap_cols(T** matr, int c1, int c2, int n) {
    T tmp;
    if (c1 == c2)
        return;
    for (int i = 0; i < n; ++i) {
        tmp = matr[i][c1];
        matr[i][c1] = matr[i][c2];
        matr[i][c2] = tmp;
    }
}

template <typename T>
void task_function(T** matr, int n, int m) {
    int odd_el_ind = -1, even_elem_ind = -1;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            if (matr[i][j] % 2 == 0 && even_elem_ind == -1)
                even_elem_ind = j;
            else if (matr[i][j] % 2)
                odd_el_ind = j;
        }
    swap_cols<T>(matr, odd_el_ind, even_elem_ind, n);
}

int main() {
    cout << "Enter n, m: ";
    int n, m;
    cin >> n >> m;
    cout << "Enter integer matrix" << endl;
    auto int_mat = read_matrix<int>(n, m);

    cout << "Integer matrix" << endl;
    print_matrix(int_mat, n, m);

    task_function<int>(int_mat, n, m);

    cout << endl << "After task function" << endl;

    cout << "Integer matrix" << endl;
    print_matrix(int_mat, n, m);

    remove_matrix<int>(int_mat, n);
    return 0;
}