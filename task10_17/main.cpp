#include <iostream>

using namespace std;

void print_table(int val, int iter = 1) {
    if (iter > val * 2)
        return;
    int tmp_iter = (iter > val) ? val * 2 - iter + 1 : iter;
    for (int i = 0; i < tmp_iter; ++i)
        cout << tmp_iter;
    for (int i = 0; i < val * 2 - tmp_iter * 2; ++i)
        cout << '-';
    for (int i = 0; i < tmp_iter; ++i)
        cout << tmp_iter;
    cout << endl;
    print_table(val, iter + 1);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    print_table(n);
    return 0;
}
