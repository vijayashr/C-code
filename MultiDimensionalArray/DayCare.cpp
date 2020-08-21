//This program allows the user to enter the age of the child
//and the number of days per week the child will be at the day
//care center. The program will output the appropriate weekly 
//rate.

#include <iostream>
using namespace std;

int main()
{
    // Declare two dimensional array here
    double determineRateCharge[5][5] = { {30.00, 60.00, 88.00, 115.00,140.00},
                                        {26.00, 52.00, 70.00, 96.00, 120.00},
                                        {24.00, 46.00, 67.00, 89.00, 110.00},
                                        {22.00, 40.00, 60.00, 75.00, 88.00},
                                        {20.00, 35.00, 50.00, 66.00, 84.00} };
    // Declare other variables
    int numDays;
    int age;
    int QUIT = 99;

    // This is the work done in the getReady() function
    // Perform a priming read to get the age of the child
    cout << "Enter the age of the child: ";
    cin >> age;
    while (age != QUIT)
    {
        // This is the work done in the determineRateCharge() function 
        // Ask the user to enter the number of days
        cout << "Enter the number of Days: ";
        cin >> numDays;
        while (numDays < 1 || numDays > 5)
        {
            cout << "Enter a day between 1 through 5. " << endl;
            cin >> numDays;
        }
        // Print the weekly rate
        if (age > 4)
            age = 4;
        cout << "The weekly rate is: $" << determineRateCharge[age][numDays - 1] << endl;
        //cout<<determineRateCharge[age][numDays-1]<<endl;
         // Ask the user to enter the next child's age
        cout << "Enter the age of the child: ";
        cin >> age;
    }
    // This is the work done in the finish() function
    cout << "End of program" << endl;

    return 0;
} // End of main() function
