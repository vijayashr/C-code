//This program uses a bubble sort to arrange up to 300 household sizes in
// descending order and then prints the mean and median household size. 
// Input:  Interactive.
// Output:  Mean and median household size. 
//Execute the program with the following input and record the output:
//Household sizes : 4, 1, 2, 4, 3, 3, 2, 2, 2, 4, 5, 6


#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare variables.

    const int SIZE = 300;  // Number of household sizes
    int householdSizes[SIZE];    // Array used to store 300 household sizes
    int x;
    int limit = SIZE;
    int householdSize = 0;
    int pairsToCompare;
    bool switchOccurred;
    int temp;
    double sum = 0;
    double mean = 0;
    double median = 0;

    // Input household size    
    cout << "Enter household size or 999 to quit: ";
    cin >> householdSize;

    // This is the work done in the fillArray() function
    x = 0;
    while (x < limit && householdSize != 999)
    {
        // Place value in array.
        householdSizes[x] = householdSize;
        // Calculate total of household sizes
        sum += householdSizes[x];
        x++;    // Get ready for next input item.
        cout << "Enter household size or 999 to quit: ";
        cin >> householdSize;
    }  // End of input loop.
    limit = x;
    // Find the mean
    mean = sum / limit;
    // This is the work done in the sortArray() function
    pairsToCompare = limit - 1;
    switchOccurred = true;

    while (switchOccurred == true)
    {
        x = 0;
        switchOccurred = false;
        while (x < pairsToCompare)
        {
            if (householdSizes[x] > householdSizes[x + 1])
            {
                temp = householdSizes[x + 1];
                householdSizes[x + 1] = householdSizes[x];
                householdSizes[x] = temp;
                switchOccurred = true;
            }
            x++;
        }
        pairsToCompare--;
    }
    // This is the work done in the displayArray() function
    x = 0;
    while (x < limit)
    {
        cout << householdSizes[x] << endl;
        x++;
    }
    // Print the mean
    cout << "Mean household size in Marengo is: " << mean << endl;
    // Find the median
    median = (limit - 1) / 2;
    // Print the median
    if (limit % 2 == 0)
    {
        cout << "The median household size in Marengo is: "
            << (householdSizes[(int)median] + householdSizes[(int)median + 1]) / 2.0 << endl;
    }
    //      cout<<householdSizes[(int)median]<<endl;
    //      cout<<householdSizes[(int)median+1]<<endl;}
    else {
        cout << "The median household size in Marengo is: "
            << householdSizes[(int)median] << endl;
    }
    return 0;
} // End of main function
