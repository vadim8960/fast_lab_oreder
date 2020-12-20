#include <iostream>

using namespace std;

int main() {
    double y, y_1 = 0.1, y_2 = -0.1;
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n == 1)
        cout << y_1 << endl;
    else if (n == 2)
        cout << y_2 << endl;
    else {
        for (int i = 3; i <= n; ++i) {
            y = i / 3. * (y_1 * y_1) + (i + 1) / 2. * (y_2 * y_2);
            y_1 = y_2;
            y_2 = y;
        }
        cout << y << endl;
    }
    return 0;
}
