#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double eps, x, pow_x, s = 0, s_last = 0, last_diff = 0, diff = 0;
    int n = 0, diff_counter = 0;
    bool flag = true;
    cout << "Enter eps, x: ";
    cin >> eps >> x;

    pow_x = 1;
    do {
        diff = last_diff;
        s_last = s;
        s += 1 / pow_x;
        pow_x *= x;
        ++n;
        flag = true;
        diff = fabs(s - s_last);
        if (fabs(diff - last_diff) > 1)
            diff_counter++;
        if (diff_counter > 10) {
            flag = false;
            break;
        }
    } while (diff > eps);
    if (flag) {
        cout << x << ' ' << eps << ' ' << s << ' ' << n << endl;
    } else {
        cout << x << ' ' << eps << " Нет сходимости" << endl;
    }
    return 0;
}
