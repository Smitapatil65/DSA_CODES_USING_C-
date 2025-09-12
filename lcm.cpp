#include <iostream>
using namespace std;

int main()
{
    int n1, n2, max, lcm;

    // Input two numbers
    cout << "Enter First Number: ";
    cin >> n1;
    cout << "Enter Second Number: ";
    cin >> n2;

    // Find the maximum of the two numbers
    max = (n1 > n2) ? n1 : n2;

    // Initialize LCM as the maximum
    lcm = max;

    // Loop to find LCM
    while (true)
    {
        // Check if the current lcm is divisible by both n1 and n2
        if (lcm % n1 == 0 && lcm % n2 == 0)
        {
            // LCM is found
            break;
        }
        lcm += max; // Increment lcm by the maximum value
    }

    // Output the result
    cout << "LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;

    return 0;
}
