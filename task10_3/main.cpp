#include <iostream>
#include <cmath>

using namespace std;

bool check_prime(int val, int iter = 2) {
    if (val < 2)
        return false;
    if (val % iter)
        return check_prime(val, iter + 1);
    if (sqrt(static_cast<double>(val)) < iter)
        return true;
    return false;
}

void print_prime_factor(int val, int iter = 2) {
    if (val < 2) {
        cout << endl;
        return;
    }
    if (check_prime(iter) && val % iter == 0) {
        cout << iter << ' ';
    }
    if (val < iter) {
        cout << endl;
        return;
    }
    print_prime_factor(val, iter + 1);
}

int main() {
    cout << "Enter value for prime factor: ";
    int x;
    cin >> x;
    print_prime_factor(x);
    return 0;
}
