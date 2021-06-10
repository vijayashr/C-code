//This program prints the numbers 1 to 100.
//But for multiples of 3 the program prints “Fizz” instead of the number 
//and for multiples of 5 the program prints “Buzz”.
//For number which are multiples of both 3 and 5 the program prints “FizzBuzz”.

#include <iostream> //enables program to perform input and output
using namespace std; //using directive

//function main begins the program execution
int main()
{
	int i; //declaration of variable

	for (i = 1; i <= 100; i++) //looping through numbers
	{
		if (i % 3 == 0 && i % 5 == 0) //if numbers are multiples of 3 and 5
		{
			cout << "FizzBuzz" << endl;
		}
		else if (i % 3 == 0) //if numbers are multiples of 3
		{
			cout << "Fizz" << endl;
		}
		else if (i % 5 == 0)//if numbers are multiples of 5
		{
			cout << "Buzz" << endl;
		}
		else
		{
			cout << i << endl;// prints the numbers other than multiples of 3, 5 or both 3 and 5
		}
	}
	return 0;
}