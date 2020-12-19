#include <iostream>

int main() {
    // std::cout << "Hello, World!" << std::endl;
    int x, num, mul = 0, sum = 0, new_num = 0, tmp = 0;
    float res;
    std::cout << "Input X:\n";
    std::cin >> x;
    num = x;
    tmp = num;

    for ( mul = 1; x; x /= 10 )
        mul *= x % 10;

    for ( sum = 0; num; num /= 10 )
        sum += num % 10;

    res = mul % sum;

    new_num = (tmp / 100) * 100 + (tmp % 10) * 10 + (tmp / 10 % 10);
    std::cout << "Mul: " << mul << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Mul % Sum = " << res << std::endl;
    std::cout << "Y = " << new_num << std::endl;



    return 0;
}
