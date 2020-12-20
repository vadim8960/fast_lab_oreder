#include <iostream>

using namespace std;

int fact(int i) {
    if (i <= 1)
        return 1;
    return i * fact(i - 1);
}

void print_pol(double *pol, int n) {
    for (int i = 0; i < n + 1; ++i)
        cout << pol[i] << ' ';
    cout << endl;
}

double *create_pol(int n) {
    double *retv = new double[n + 1];
    for (int i = 0; i < n + 1; ++i)
        retv[i] = 0;
    return retv;
}

void multiply_polynomial(double *pol1, double *pol2, int n1, int n2, double *res) {
    for (int i = 0, k = 0; i < n1 + 1; ++i) {
        k = i;
        for (int j = 0; j < n2 + 1; ++j) {
            res[k++] += (pol1[i] * pol2[j]);
        }
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    double *pol = create_pol(n);
    for (int i = 0; i < n + 1; ++i)
        pol[i] = fact(n) / static_cast<double>(fact(i) * fact(n - i));
    cout << "Initial polynomial: ";
    print_pol(pol, n);

    double *pol_der = create_pol(n - 1);
    for (int i = 0; i < n; ++i)
        pol_der[i] = (n - i) * pol[i];
    cout << "Derivative polynomial: ";
    print_pol(pol_der, n - 1);

    double *res = create_pol(2 * n - 1);
    multiply_polynomial(pol, pol_der, n, n - 1, res);
    cout << "Result polynomial: ";
    print_pol(res, 2 * n - 1);

    delete [] pol;
    delete [] pol_der;
    delete [] res;
    return 0;
}
