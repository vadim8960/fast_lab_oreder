#include <iostream>
#include <iomanip>

using namespace std;

int** create_matrix(int n, int m) {
    int** retv = new int*[n];
    for (int i = 0; i < n; ++i)
        retv[i] = new int[m];
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

int main() {
    int n, c = 0;
    cin >> n;
    int **mat = create_matrix(n, n);

    for (int i = 0; i < n; ++i) {
        for (int j = (i % 2) ? 0 : n - 1; (i % 2) ? j < n : j >= 0; (i % 2) ? ++j : --j) {
            mat[i][j] = c++;
        }
    }

    print_matrix(mat, n, n);

    remove_matrix(mat, n);
    return 0;
}
