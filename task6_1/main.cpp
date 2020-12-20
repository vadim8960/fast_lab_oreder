#include <iostream>
#include <iomanip>

using namespace std;

int** create_matrix(int n, int m) {
    int** retv = new int*[n];
    for (int i = 0; i < n; ++i)
        retv[i] = new int[m];
    return retv;
}

void remove_matrix(int** matr, int n) {
    for (int i = 0; i < n; ++i)
        delete [] matr[i];
    delete [] matr;
}

int** read_matrix(int n, int m) {
    int** retv = create_matrix(n, m);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> retv[i][j];
    return retv;
}

void print_matrix(int** matr, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cout << setw(3) << matr[i][j] << ' ';
        cout << endl;
    }
}

void swap_rows(int** matr, int r1, int r2, int m) {
    int tmp;
    for (int i = 0; i < m; ++i) {
        tmp = matr[r1][i];
        matr[r1][i] = matr[r2][i];
        matr[r2][i] = tmp;
    }
}

void task_function(int** matr, int n, int m) {
    for (int i = 0; i < n / 2; ++i)
        swap_rows(matr, i, n - i - 1, m);
}

int main() {
    cout << "Enter n, m: ";
    int n, m;
    cin >> n >> m;
    cout << "Enter matrix" << endl;
    auto int_mat = read_matrix(n, m);

    cout << "Matrix" << endl;
    print_matrix(int_mat, n, m);

    task_function(int_mat, n, m);

    cout << endl << "After task function" << endl;
    print_matrix(int_mat, n, m);

    remove_matrix(int_mat, n);
    return 0;
}