#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

int main() {
    int X;
    double denom, numer, res;
    cout << "Введите  X:\n";
    cin >> X;
    if (X <= -6){
        cout << "Корень из отрицательного числа\n";
    } else {
        if (X == -1){
            cout << "Деление на 0\n";
        } else {
            if (X >= 5){
                cout << "Логарифм неположительного числа\n";
            } else {
                numer = (sqrt(X + 5) + log(8 - 2 * X));
                denom = sqrt(X * X  + 2 * X + 1);
                res = numer / denom;
                cout << "Результат - " << res << endl;
            }
        }
    }
    return 0;
}
