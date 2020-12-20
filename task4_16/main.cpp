#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, pow1, pow2, pow3, s = 0;
    int n = 0, fact;
    cout << "Enter n, x: ";
    cin >> n >> x;

    pow1 = -1;
    pow2 = x;
    pow3 = 1;
    fact = 1;
    for (int i = 0; i < n; ++i) {
        fact *= ((2 * i + 1) * (2 * i + 2));
        pow1 *= -1;
        s += ( (pow1 * fact * pow2) / pow3 );
        pow2 *= (x * x);
        pow3 *= x;
    }
    cout << n << ' ' << x << ' ' << s << endl;
    return 0;
}
