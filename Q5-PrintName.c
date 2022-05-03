// Question 5

//Note: This question has been use (http://cpp.sh/) to compile and get the end result.

// Included C Libraries
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Declare a String variable with 30 maximum-length characters only.
char inputName[30];

// Declare function
int printName(char inputName);

// Print out the Name in the design requested.. 
int printName(char inputName[]) {
    
    // Declared the star symbol length for one printed line. 
    int startLength = 50;
	
	printf("**************************************************\n");
	
	// Set first and last star symbol on the printed line.
	printf("*%*s", startLength, "*\n");
	
	/*
	    strlen(inputName) : Get the parameter length size 
	    startLength/2 + strlen(inputName)/2 AND startLength/2 - ((strlen(inputName))/2)-1 : Set the diplay name a the middle of the star symbol box. 
	*/
	printf("*%*s%*c\n", startLength/2 + strlen(inputName)/2, inputName, startLength/2 - ((strlen(inputName))/2)-1, '*');
	
	// Set first and last star symbol on the printed line.
	printf("*%*s", startLength, "*\n");
	
	printf("**************************************************\n");
	
	return 0;
}


// Main Function
int main() {
	// Instruction
	printf("\nPlease enter your name not more than 30 characters...");
	
	// Request input and set a maximum-length with 30 characters which also allowed have space among the character.
	scanf("%30[^\n]s", inputName);
	printf("\n\nEntered your name : %s", inputName);
	printf("\n\n");
	
	// Called printName function to display with requested result. 
	printName(inputName);
	
	return 0;
}


