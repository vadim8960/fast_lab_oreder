#include <iostream>

int main() {
    int X, Y, mul = 0, sum = 0, res = 0;
    std::cout << "Input X:\n";
    std::cin >> X;

    mul = (X / 100) * (X / 10 % 10) * (X / 10);
    sum = (X / 100) + (X / 10 % 10) * (X / 10);

    res = mul % sum;

    Y = (X / 100) * 100 + (X % 10) * 10 + (X / 10 % 10);
    std::cout << "Mul: " << mul << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Mul % Sum = " << res << std::endl;
    std::cout << "Y = " << Y << std::endl;

    return 0;
}
