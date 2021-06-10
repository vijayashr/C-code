//This program will show how you can use pointers to calculate the 
//minimum and maximum in an array of 10 numbers. 

#include <iostream>
using namespace std;
#include "MinAndMax.h" // include the definition of MinAndMax

int main()
{
	int array[10]; // declaring the array
	int i;

	cout << "Please enter 10 numbers" << endl; //requesting user input
	for (i = 0; i < 10; i++)
	{
		cin >> array[i]; //loading the array
	}

	int min = array[0];
	int max = array[0];
		
	getMinAndMax(array, 10, &min, &max); //Referencing the pointers *min and *max

	cout << "The maximum number is " << max << endl;
	cout << "The minimum number is " << min << endl;

	return 0;
}