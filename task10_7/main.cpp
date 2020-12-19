#include <iostream>

using namespace std;

int A(int n, int m) {
    if (n == 1)
        return m;
    return (m - n + 1) * A(n - 1, m);
}

int main() {
    cout << "Enter m, n: ";
    int n, m;
    cin >> m >> n;
    cout << "A(n, m) = " << A(n, m) << endl;
    return 0;
}
