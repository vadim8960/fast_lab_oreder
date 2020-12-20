#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    int X, Y, Y1, Y2, Y3, Y4, mul = 0, sum = 0, res = 0, a, b, c, d;
    cout << "Input X:\n";
    cin >> X;
    a = X / 1000; 
    b = X / 100 - a * 10;
    c = (X % 100) / 10;
    d = X % 10;
    sum = (X / 100) + (X / 10 % 10) * (X / 10);
    Y1 = ((X / 100) * (X / 10 % 10) * (X / 10)) % 10 * 1000;
    Y2 = (b * c) % a * 100;
    Y3 = sum % d * 10;
    Y4 = abs(b - c) % 10;
    Y = Y1 + Y2 + Y3 + Y4;
    cout << "Y = " << Y << endl;
    return 0;
}
