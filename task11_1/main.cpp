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
void swap_rows(T** matr, int r1, int r2, int m) {
    T tmp;
    for (int i = 0; i < m; ++i) {
        tmp = matr[r1][i];
        matr[r1][i] = matr[r2][i];
        matr[r2][i] = tmp;
    }
}

template <typename T>
void task_function(T** matr, int n, int m) {
    for (int i = 0; i < n / 2; ++i)
        swap_rows<T>(matr, i, n - i - 1, m);
}

int main() {
    cout << "Enter n, m: ";
    int n, m;
    cin >> n >> m;
    cout << "Enter integer matrix" << endl;
    auto int_mat = read_matrix<int>(n, m);
    cout << "Enter char matrix" << endl;
    auto char_mat = read_matrix<char>(n, m);
    cout << "Enter double matrix" << endl;
    auto double_mat = read_matrix<double>(n, m);

    cout << "Integer matrix" << endl;
    print_matrix(int_mat, n, m);
    cout << "Char matrix" << endl;
    print_matrix(char_mat, n, m);
    cout << "Double matrix" << endl;
    print_matrix(double_mat, n, m);

    task_function<int>(int_mat, n, m);
    task_function<char>(char_mat, n, m);
    task_function<double>(double_mat, n, m);

    cout << endl << "After task function" << endl;

    cout << "Integer matrix" << endl;
    print_matrix(int_mat, n, m);
    cout << "Char matrix" << endl;
    print_matrix(char_mat, n, m);
    cout << "Double matrix" << endl;
    print_matrix(double_mat, n, m);

    remove_matrix<int>(int_mat, n);
    remove_matrix<char>(char_mat, n);
    remove_matrix<double>(double_mat, n);
    return 0;
}
