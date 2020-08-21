// Reverse.cpp - This program reverses numbers stored in an array.
// Input:  None
// Output:  Original contents of array and the reversed contents of the array. 

#include <iostream>
#include <string>
using namespace std;

void reverseArray(int[]);

int main()
{
    int numbers[] = { 9, 8, 7, 6, 5 };
    int x;
    // Print contents of array
    for (x = 0; x < 5; x++)
        cout << "Original contents of array: " << numbers[x] << endl;
    // Call reverseArray() function here   
    reverseArray(numbers);
    // Print contents of reversed array
//     for (i=0;i<j;i++) 
 //    cout<<"Array after reversal "<<numbers[x]<<endl;
    return 0;
} // End of main() function

// Write reverseArray function here.
void reverseArray(int numbers[])
{
    int temp;
    int i = 0;
    int j = 4;
    while (i < j)
    {
        temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
        i++;
        j--;
    }
    for (i = 0; i < 5; i++)
        cout << "Reversed contents of array: " << numbers[i] << endl;
}
