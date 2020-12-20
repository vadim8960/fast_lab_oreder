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

bool check_col(int **mat, int n, int col) {
    for (int i = 0; i < n; ++i) {
        if (mat[i][col] % 2)
            return false;
    }
    return true;
}

void insert_element(int **mat, int m, int row, int pos) {
    int *arr = new int[m + 1];
    memcpy(arr, mat[row], sizeof(int) * m);
    delete [] mat[row];
    mat[row] = arr;
    ++m;
    for (int i = m - 1; i > pos; --i)
        mat[row][i] = mat[row][i - 1];
}

int main() {
    int n, m;
    cout << "Enter n, m: ";
    cin >> n >> m;
    cout << "Enter matrix" << endl;
    int **mat = create_matrix(n, m);

    for (int i = 0; i < m; ++i) {
        if (check_col(mat, n, i)) {
            for (int j = 0; j < n; ++j) {
                insert_element(mat, m, j, i);
            }
            ++m;
            ++i;
        }
    }

    print_matrix(mat, n, m);

    remove_matrix(mat, n);
    return 0;
}
