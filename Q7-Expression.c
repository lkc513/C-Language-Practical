// Question 7

//Note: This question has been use (http://cpp.sh/) to compile and get the end result.

// Included C Libraries
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

// Declare variables and default value. 
int seq = 0;
int expression = 0;

// Declare multiple function depend on the choosen sequences without parameter. 
int sequence_1();
int sequence_2();
int sequence_3();
int sequence_4();
int sequence_5();

// Main Function
int main() {
	// Instruction
	printf("\nPlease choose (1 to 5) sequences by using the number in parantheses on below options to see the results...\n");
	
	printf("\nSequence (1) : !(3+3>=6)");
	printf("\nSequence (2) : 1+6==7||3+2==1");
	printf("\nSequence (3) : 1>5||6<50&&2<5");
    printf("\nSequence (4) : 14!=55&&!(13<29)||31>52");
    printf("\nSequence (5) : 6<7>5");
    
    printf("\n\nPress on (0) number to quit after completed the 5 sequences on above. \n"); 
    	            
    // Do-While Statment to loop all the sequences choosen by the user and show result by the choosen sequence.
	do {
	    scanf("%d", &seq);
	    printf("\nSequence (1-5) : %d", seq);
	    
	    // IF-ELSE statement: Call to choosen sequence and display the logic of the true false result. 
	    if(seq == 0) {
	        // Do Nothing..!
	    } else if(seq == 1) {
	        sequence_1();    
	    } else if (seq == 2) {
	        sequence_2();    
	    } else if (seq == 3) {
	        sequence_3();    
	    } else if (seq == 4) {
	        sequence_4();    
	    } else if (seq == 5) {
	        sequence_5();    
	    } else {
            printf("No result. Number choosen are not in between 1-5.");    
	    }
	    
	} while (seq != 0); // End while user press on (0) number else it will non-stop. 
	
	return 0;
}

// Sequence (1) output: 
int sequence_1(){
    printf("\n!(3+3>=6)");
    printf("\n!((3+3) >= 6)");
    printf("\n!(6 >= 6)");
    printf("\n!(TRUE)");
    
    expression = !(3+3>=6);
    
    if(expression == 1) {
        printf("\nExpression result is : TRUE !!! \n");
    } else {
        printf("\nExpression result is : FALSE !!! \n");
    }
    
    return 0;
}

// Sequence (2) output: 
int sequence_2(){
    printf("\n1+6==7||3+2==1");
    printf("\n(1+6==7)||(3+2==1)");
    printf("\n(7==7)||(5==1)");
    printf("\n(TRUE) || (FALSE)");
    
    expression = 1+6==7||3+2==1;
    
    if(expression == 1) {
        printf("\nExpression result is : TRUE !!! \n");
    } else {
        printf("\nExpression result is : FALSE !!! \n");
    }
    
    return 0;
}

// Sequence (3) output: 
int sequence_3(){
    printf("\n1>5||6<50&&2<5");
    printf("\n(1>5) || (6<50) && (2<5)");
    printf("\nFALSE || ((6<50) && (2<5))");
    printf("\nFALSE || (TRUE && TRUE)");
    printf("\nFALSE || TRUE");
    
    expression = 1>5||6<50&&2<5;
    
    if(expression == 1) {
        printf("\nExpression result is : TRUE !!! \n");
    } else {
        printf("\nExpression result is : FALSE !!! \n");
    }
    
    return 0;
}


// Sequence (4) output: 
int sequence_4(){
    printf("\n14!=55&&!(13<29)||31>52");
    printf("\n(14!=55) && !(TRUE) || (31>52)");
    printf("\nTRUE && FALSE || FALSE");
    printf("\nTRUE && FALSE");
    
    expression = 14!=55&&!(13<29)||31>52;
    
    if(expression == 1) {
        printf("\nExpression result is : TRUE !!! \n");
    } else {
        printf("\nExpression result is : FALSE !!! \n");
    }
    
    return 0;
}

// Sequence (5) output: 
int sequence_5(){
    printf("\n6<7>5");
    printf("\n(6<7)>5");
    printf("\n(TRUE) > 5");
    
    expression = 6<7>5;
    
    if(expression == 1) {
        printf("\nExpression result is : TRUE !!! \n");
    } else {
        printf("\nExpression result is : FALSE !!! \n");
    }
    
    return 0;
}




















