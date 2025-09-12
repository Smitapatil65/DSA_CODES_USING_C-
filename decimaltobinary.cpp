#include <iostream>
#include <cmath>
using namespace std;

int convert(long  n);

int main() {
    long  n;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << n << " in binary = " << convert(n) << " in decimal" << endl;
    return 0;
}

int convert(long  n) {
    int decimal = 0, i = 0, rem;

    while (n != 0) {
        rem = n % 10;         // Get the last digit of the binary number
        n = n / 10;           // Remove the last digit
        decimal += rem * pow(2, i); // Add to decimal value
        ++i;                  // Increment the power
    }

    return decimal;
}
