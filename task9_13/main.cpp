#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int** create_matrix(int n, int m) {
    int** retv = new int*[n];
    for (int i = 0; i < n; ++i) {
        retv[i] = new int[m];
        for (int j = 0; j < m; ++j)
            cin >> retv[i][j];
    }
    return retv;
}

void remove_matrix(int **mat, int n) {
    for (int i = 0; i < n; ++i)
        delete [] mat[i];
    delete [] mat;
}

void print_matrix(int **matr, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cout << setw(3) << matr[i][j] << ' ';
        cout << endl;
    }
}

bool check_row(int **mat, int m, int row, int val) {
    for (int i = 0; i < m; ++i) {
        if (mat[row][i] == val)
            return true;
    }
    return false;
}

void remove_row(int **mat, int &n, int row) {
    delete [] mat[row];
    for (int i = row; i < n; ++i)
        mat[i] = mat[i + 1];
    --n;
}

int main() {
    int n, m, x;
    cout << "Enter n, m, x: ";
    cin >> n >> m >> x;
    cout << "Enter matrix" << endl;
    int **mat = create_matrix(n, m);

    for (int i = 0; i < n; ++i) {
        if (check_row(mat, m, i, x)) {
            remove_row(mat, n, i);
            --i;
        }
    }

    print_matrix(mat, n, m);

    remove_matrix(mat, n);
    return 0;
}

