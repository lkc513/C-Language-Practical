// Question 4

//Note: This question has been use (http://cpp.sh/) to compile and get the end result.

// Included C Libraries
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

// Main Function
int main()
{
    // Declare given list of numbers
    int n[] = {1,4,7,10,13,16};

    // Initialize the random seed    
    srand (time(NULL));
    
    // Rand() function is to returns a pseudo-random integral number from the list
    int i = n[rand()%6];
    
    // Display the random number
    printf("Get Random Number : %d", i);
    
    printf("\n\nFinished...!");
    return 0;
}
