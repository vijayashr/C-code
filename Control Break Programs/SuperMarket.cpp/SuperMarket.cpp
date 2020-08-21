//This program creates a report that lists weekly hours worked
// by employees of a supermarket. The report lists total hours for 
// each day of one week. 
// Input:  Interactive
// Output: Report. 
//The program is executed with the following data
//Monday—6 hours (employee 1)
//Tuesday—2 hours(employee 1), 3 hours(employee 2)
//Wednesday—5 hours(employee 1), 3 hours(employee 2)
//Thursday—6 hours(employee 1)
//Friday—3 hours(employee 1), 5 hours(employee 2)
//Saturday—7 hours(employee 1), 7 hours(employee 2), 7 hours(employee 3)
//Sunday—0 hours

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Declare variables.
    const string HEAD1 = "WEEKLY HOURS WORKED";
    const string DAY_FOOTER = "                                Day Total ";
    // Leading spaces in DAY_FOOTER are intentional.
    const string SENTINEL = "done";            // Named constant for sentinel value. 
    double hoursWorked = 0;                  // Current record hours.
    string dayOfWeek;                      // Current record day of week.
    double hoursTotal = 0;                         // Hours total for a day.
    string prevDay = "";           // Previous day of week.
    bool notDone = true;               // loop control
    int count = 0;

    // Print two blank lines.
    cout << endl << endl;
    // Print heading.
    cout << "\t\t\t\t\t" << HEAD1 << endl;
    // Print two blank lines.
    cout << endl << endl;

    // Read first record 
    while (notDone == true)
    {
        cout << "Enter day of week or done to quit: ";
        cin >> dayOfWeek;
        if (dayOfWeek == SENTINEL)
            notDone = false;
        else
        {
            cout << "Enter hours worked: ";
            cin >> hoursWorked;
            hoursTotal += hoursWorked;

            // Implement control break logic here
            // Include work done in the dayChange() function
            if (count > 0)
            {
                if (dayOfWeek != prevDay)
                {
                    cout << endl << endl;
                    cout << DAY_FOOTER << "(" << prevDay << ")" << " " << hoursTotal - hoursWorked << endl;
                    hoursTotal = hoursWorked;
                    //        cout<<DAY_FOOTER<<"("<<prevDay<<")"<<hoursWorked<<endl;
                }
            }
            cout << dayOfWeek << " " << hoursWorked << endl;
            prevDay = dayOfWeek;
            count++;
        }
    }
    cout << endl << endl;
    //  cout<<DAY_FOOTER<<"("<<prevDay<<")"<< " " <<hoursWorked<<endl;           
    cout << "\t\t" << DAY_FOOTER << hoursTotal << endl;

    return 0;

} // End of main() 