#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    int X, A, a, b, c;
    cout << "Input A:\n";
    cin >> A;
    cout << "Input X:\n";
    cin >> X;
    if (A <= 100 || X > 10)
        cout << "Uncorrected input\n";
    else{
        a = A / 100; 
        b = (A % 100) / 10;
        c = A % 10;
        
        if ((a > X) && (b > X) && (c > X))
            A -= 100;
        else
        if ((a > X) && (b > X))
            A += 100;
        else
        if ((a < X) && (b < X) && (c < X))
            A -= 50;
        else
        if ((b < X) && (c < X))
            A += 50;
        else
            A += 10;
        cout << "Result:\n" << A << endl;
        
    }
    return 0;
}
