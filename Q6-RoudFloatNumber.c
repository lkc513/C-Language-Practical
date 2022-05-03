// Question 6

//Note: This question has been use (http://cpp.sh/) to compile and get the end result.

// Included C Libraries
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	// Declared input variable and default value. 
	double in = 0.0; 
	
	// Declared output variable and default value. 
	double out = 0.0;
	
	// This 'do while' looping will stop as long as the input number is biggest than ZERO. 
	/* 
		The reason here not suppose to use IF-ELSE statement as 
		validator because 'IF-ELSE' only one time checking input but 
		'Do-While' will validate until the right request input inserted. 
	*/
	do {
	    // Instruction
		printf("\nPlease only enter positive floating number... \n");
	
	    // Request input
		scanf("%lf", &in);
		printf("\nEntered floating number : %lf", in);
		
	} while (in <= 0);
	
	// Called round function from Math.h library
	/*
		- This function returns the nearest integer value 
		  of the float/double/long double argument 
		  passed to this function. 
		- If decimal value is from ”.1 to .5?, 
		  it returns integer value less than the argument. 
		- If decimal value is from “.6 to .9?, 
		  it returns the integer value greater than the argument.
	*/
	out = round(in*100)/100;
	
	// Show the output after rounding... 
	printf("\n\nRounded number with 6 decimals to 2 decimals : %.6lf ", out);
		
	return 0;
}


