// Computation.cpp - This program calculates sum, difference, and product of two values.
// Input:  Interactive
// Output:  Sum, difference, and product of two values. 
//The program prompts the user for 2 numeric values. Both numeric values should
//be passed to functions named sum(), difference(), and product().

#include <iostream>
#include <string>
void calculateSum(double, double);
void calculateDifference(double, double);
void calculateProduct(double, double);
using namespace std;

int main()
{
    double value1;
    double value2;

    cout << "Enter first numeric value: ";
    cin >> value1;
    cout << "Enter second numeric value: ";
    cin >> value2;

    // Call calculateSum
    calculateSum(value1, value2);
    // Call calculateDifference
    calculateDifference(value1, value2);
    // Call calculateProduct 
    calculateProduct(value1, value2);
    return 0;
} // End of main() function

// Write calculateSum function here
void calculateSum(double value1, double value2)
{
    int sum;
    sum = value1 + value2;
    cout << "The sum of two numbers is " << sum << endl;
}

// Write calculateDifference function here
void calculateDifference(double value1, double value2)
{
    int diff;
    diff = value1 - value2;
    cout << "The difference of two numbers is " << diff << endl;
}

// Write calculateProduct function here
void calculateProduct(double value1, double value2)
{
    int prod;
    prod = value1 * value2;
    cout << "The product of two numbers is " << prod << endl;
}
