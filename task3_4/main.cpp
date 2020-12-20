#include <iostream>

using namespace std;

int main() {
    int n, div = 2;
    cout << "Enter n: ";
    cin >> n;

    cout << 1;
    while (n > 1) {
        if (n % div == 0) {
            cout << " * " << div;
            n = n / div;
        } else
            div++;
    }
    return 0;
}
