// Programmer:		Thecanniestbadge
// Date:			5/24/2023
// Program Name:	Feet-Inches to Inches
// Chapter:			Fundamentals
// Description:		Write a program to calculate height in inches. 
//					Ask the user to enter their height in feet and inches (both as integers) and convert feet and inches to just inches.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	int heightFeet;
	int heightInches;
	const int feetToInches = 12;
	int totalInches = 0;
	// *** Your program goes here ***

	// *** INPUT ***
	// Gets 2 inputs one for feet and one for inches
	printf("Enter your height in feet: ");
	scanf("%d", &heightFeet);
	printf("Enter your remaining height in inches: ");
	scanf("%d", &heightInches);
	printf("\n"); // Blank line


	// *** PROCESSING ***
	// Converting feet to inches and gives the total amount of inches for the users height
	totalInches = heightFeet * feetToInches + heightInches;


	// *** OUTPUT ***
	printf("Your overall height is %d inches.\n", totalInches);
	printf("\n"); // Blank line





	return 0;
} // end main()