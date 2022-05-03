// Question 8

//Note: This question has been use (http://cpp.sh/) to compile and get the end result.

// Included C Libraries
#include <stdio.h>
#include <stdlib.h>

// Declare the variable and default value. 
int a =0, b =0, c =0;

// Declare Function with the pass in parameter. 
int smallestCompare(int a, int b, int c);

// Get the smallest number by using IF-ELSE statement function. 
int smallestCompare(int a, int b, int c) {
		
	// Nested If-Else Statement
	if(a < b && a < c) {
	    printf("(%d) is the smallest number among the inputs. \n", a);      
    } else if(b < a && b < c) {
        printf("(%d) is the smallest number among the inputs. \n", b);      
    } else if(c < a && c < b) {
        printf("(%d) is the smallest number among the inputs. \n", c);      
    } else if (a = b) {
        if (a > c) {
            printf("(%d) is the smallest number among the inputs. \n", c);
        } else {
            printf("(%d) is the smallest number among the inputs. \n", a);
        }
    } else if (a = c) {
        if (a > b) {
            printf("(%d) is the smallest number among the inputs. \n", b);
        } else {
            printf("(%d) is the smallest number among the inputs. \n", a);
        }
    } else if (b = c) {
        if (b > a) {
            printf("(%d) is the smallest number among the inputs. \n", a);
        } else {
            printf("(%d) is the smallest number among the inputs. \n", b);
        }
    }
		
	return 0;
}

// Main Function
int main() {
	printf("\nPlease enter 3 different numbers value... \n"); 
	
	// Below are getting 3 different numbers from user inputs
	scanf("%d", &a);
	printf("\nEntered first number : %d", a);
	
	scanf("%d", &b);
	printf("\nEntered second number : %d", b);
	
	scanf("%d", &c);
	printf("\nEntered third number : %d", c);
		
	printf("\n\n");	
	
	// Call another function to do comparison
	smallestCompare(a,b,c);	
	return 0;
}

