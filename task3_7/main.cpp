#include <iostream>

using namespace std;

int main() {
    int n, k;
    cout << "Enter n, k: ";
    cin >> n >> k;
    cout << "0.";
    int m = 10;
    for (int i = 0; i < k; ++i) {
        if (m / n == 0) {
            cout << '0';
            m *= 10;
            continue;
        }
        cout << m / n;
        m = m - (m / n) * n;
        m *= 10;
    }
    return 0;
}
