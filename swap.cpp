#include <iostream>
#include <iomanip> // For fixed and setprecision-number of digits displayed after the decimal point for floating-point numbers
using namespace std;

// Template function for swapping two numbers of potentially different types
template <typename T1, typename T2>
void fun(T1 &a, T2 &b) {
    T1 tmp = a;
    a = b;
    b = tmp;

    // Output after swapping
    cout << "Swapped numbers:" << endl;
    cout << fixed << setprecision(2);
    cout << "a = " << a << " b = " << static_cast<T1>(b) << endl; // Properly cast b to T1 for output
}//static_cast<T1>(b) is a type casting operation in C++explicitly convert a value from one type (T2 in this case) to another type (T1).

int main() {
    float a; // Declare a as float
   float b;   // Declare b as int

    // Input
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Output before swapping
    cout << "Before swapping numbers are:" << endl;
    cout << fixed << setprecision(2); // Set precision for consistent formatting
    cout << "a = " << a << " b = " << static_cast<float>(b) << endl;

    // Swap and display results
    fun(a, b);

    return 0;
}
