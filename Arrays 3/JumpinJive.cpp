//This program looks up and prints the names and prices of coffee orders.  
// Input:  Interactive
// Output:  Name and price of coffee orders or error message if add-in is not found 
//The program is executed using the following data: Cream, Cinnamon, Chocolate, Amaretto, Whiskey
//and the prices of .89, .25, .59, 1.50, 1.75 respectively.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare variables.
    string addIn;     // Add-in ordered
    const int NUM_ITEMS = 5; // Named constant
    // Initialized array of add-ins
    string addIns[] = { "Cream", "Cinnamon", "Chocolate", "Amaretto", "Whiskey" };
    // Initialized array of add-in prices
    double addInPrices[] = { .89, .25, .59, 1.50, 1.75 };
    bool foundIt = false;     // Flag variable
    int x;            // Loop control variable
    double orderTotal = 2.00; // All orders start with a 2.00 charge

    // Get user input 
    while (addIn != "XXX") {
        cout << "Enter coffee add-in or XXX to quit: ";
        cin >> addIn;

        foundIt = false;
        if (addIn == "XXX")
            break;

        // Write the rest of the program here. 
        for (x = 0; x < NUM_ITEMS; x++)
        {
            if (addIn == addIns[x])
            {
                cout << "The Price of " << addIns[x] << "is " << addInPrices[x] << "." << endl;
                foundIt = true;
                orderTotal += addInPrices[x];
            }
        }
        if (foundIt == false)
        {
            cout << "Sorry, we do not carry that." << endl;
        }
    }
    cout << "Order Total is " << ":$" << orderTotal << endl;
    return 0;
} // End of main() 


