//The program uses an array that contains valid names for 10 cities in Michgan.
//The user enters the city name and then the program searches the array for that
//city name. If the city is not found the program informs the user that the city
//is not a valid city. A flag is set to test if there is a match and test the flag
//variable to determine if you should print "Not a city in Michigan".Program is 
//executed with the following cities: Chicago, Brooklyn, Watervliet, Acme.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare variables
    string inCity;   // name of city to look up in array
    const int NUM_CITIES = 10;
    // Initialized array of cities
    string citiesInMichigan[] = { "Acme", "Albion", "Detroit", "Watervliet", "Coloma", "Saginaw", "Richland", "Glenn", "Midland", "Brooklyn" };
    bool foundIt = false;  // Flag variable
    int x;         // Loop control variable

    // Get user input
    cout << "Enter name of city: ";
    cin >> inCity;

    // Write your loop here  
    for (x = 0; x < NUM_CITIES; x++)
    {
        // Write your test statement here to see if there is 
        // a match.  Set the flag to true if city is found. 
        if (inCity == citiesInMichigan[x]) {
            foundIt = true;
        }
    }
    // Test to see if city was not found to determine if 
    // "Not a city in Michigan" message should be printed.
    if (foundIt)
    {
        cout << "City found." << endl;
    }
    else
    {
        cout << "Not a city in Michigan." << endl;
    }
    return 0;

} // End of main() 