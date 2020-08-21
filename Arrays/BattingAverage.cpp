//This program prompts the user to interactively enter eight batting averages,
//which the program stores in an array. The program should then find the minimum
//and maximum batting averages. Execute the program with the following batting 
//averages -- .299, .157, .242, .203, .198, .333, .270, .190. The minimum
//batting average should be .157 and the maximum batting average should be
//.333. The average should be .2365.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // Declare a named constant for array size here
    const int array_size = 8;

    // Declare array here
    double averages[array_size];

    // Use this integer variable as your loop index
    int loopIndex;

    // Use this variable to store the batting average input by user
    double battingAverage;

    // Use these variables to store the minimim and maximum values
    double min, max;

    // Use these variables to store the total and the average
    double total, average;

    // Write a loop to get batting averages from user and assign to array
    std::cout << std::fixed;
    std::cout << std::setprecision(3);
    for (loopIndex = 0; loopIndex < array_size; loopIndex++) {
        cout << "Enter a batting average: ";
        cin >> battingAverage;
        // Assign value to array
        averages[loopIndex] = battingAverage;
    }

    // Assign the first element in the array to be the minimum and the maximum
    min = averages[0];
    max = averages[0];

    // Start out your total with the value of the first element in the array
    total = averages[0];

    // Write a loop here to access array values starting with averages[1]
    for (loopIndex = 1; loopIndex < array_size; loopIndex++)
    {
        // Within the loop test for minimum and maximum averages.
        if (min > averages[loopIndex])
            min = averages[loopIndex];
        if (max < averages[loopIndex])
            max = averages[loopIndex];

        // Also accumulate a total of all averages
        total += averages[loopIndex];
    }

    // Calculate the average of the 8 batting averages 
    average = total / array_size;

    // Print the batting averages stored in the averages array 

    std::cout << std::fixed;
    std::cout << std::setprecision(3);
    for (loopIndex = 0; loopIndex < array_size; loopIndex++)
        std::cout << "Batting Average" << loopIndex << " is :" << averages[loopIndex] << endl;
    // std::cout <<averages[loopIndex]<<std::endl;

     // Print the maximum batting average, minimum batting average, and average batting average
    cout << "Minimum batting average is: " << min << endl;
    cout << "Maximum batting average is: " << max << endl;

    std::cout << std::fixed;
    std::cout << std::setprecision(4);
    cout << "Average batting average is: " << average << endl;
    return 0;
}
