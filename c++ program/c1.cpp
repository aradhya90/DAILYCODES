#include <iostream>

using namespace std;

// Function to perform a calculation based on the value of input 'n'
int test(int n)
{
    const int x = 51; // Declare a constant variable 'x' with value 51

    if (n > x) // Check if 'n' is greater than 'x'
    {
        return (n - x) * 3; // If 'n' is greater than 'x', return the result of (n - x) multiplied by 3
    }
    return x - n; // If 'n' is not greater than 'x', return the result of 'x' minus 'n'
}

// Main function
int main() 
{
    cout << test(53) << endl;  // Output the result of test function with argument 53
    cout << test(30) << endl;  // Output the result of test function with argument 30
    cout << test(51) << endl;  // Output the result of test function with argument 51
    return 0;    // Return 0 to indicate successful execution of the program
}