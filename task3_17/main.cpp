#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int k = 1; k <= n; ++k) {
        for (int i = (k % 2) ? (k + 1) / 2 : k, j = 0; j < ((k % 2) ? k / 2 + 1 : k / 2); i += (k % 2 ? -1 : -2), ++j)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}
