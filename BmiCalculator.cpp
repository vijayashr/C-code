//This program creates a BMI calculator that reads the user's weight
//in pounds and height in inches. (Only whole numbers are accepted to
//calculate the user's BMI).It then calculates and displays the
//user's body mass index. It also displays the BMI categories and their
//values from the National Heart Lung and Blood Institute.
#include <iostream> //enables program to perform input and output.
using namespace std; //using directive
//function main begins program execution
int main()
{
	//initializing variables
	int weightInPounds = 0;
	int heightInInches = 0;
	int BMI = 0;
	//requesting user's input
	cout << "Enter your weight in pounds(Only whole numbers are accepted): ";
	//reading user's input into the variable
	cin >> weightInPounds;
	//requesting user's input
	cout << "Enter your height in inches(Only whole numbers are accepted): ";
	//reading user's input into the variable
	cin >> heightInInches;
	//Calculating the BMI using the formula
	BMI = (weightInPounds * 703) / (heightInInches * heightInInches);
	//Displaying the BMI
	cout << "\n\nYour BMI is: " << BMI << endl;
	//Displaying the BMI categories and their values from the National
	//Heart Lung and Blood Institute.
	cout << "\n\nBMI VALUES" << endl;
	cout << "Underweight: less than 18.5" << endl;
	cout << "Normal: between 18.5 and 24.9" << endl;
	cout << "Overweight: between 25 and 29.9" << endl;
	cout << "Obese: 30 or greater" << endl;
	return 0;
}