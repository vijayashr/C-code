//This program will loop through the array of 10 numbers to get the
//minimum and maximum numbers. This program will also use pointers 
//to pass the addresses of the two numbers.The main function will have
//the access to the two numbers.
#pragma once

void getMinAndMax(int array[], int size, int* min, int* max)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] > *max) //if number in the array index is greater than pointer max
			*max = array[i]; //pointer max is equal to the number in the array index
		if (array[i] < *min) //if number in the array index is less than pointer min
			*min = array[i]; //pointer min is equal to the number in the array index
	}
}
