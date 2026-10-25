/**
 * Purpose: prints the pascals triangle for the given number of rows provided by user within the range of 1-12
 */

#include <stdio.h>

#define MAX 12
#define MIN 1 

//function prototypes 
int factorial(int number); 
int choose(int n, int r);
int getInputInRange(int min, int max); 

int main (void){
    int rows = 0; 
    int row_counter = 0; 
    int columns = 0; 
    int column_counter = 0; 
    int output_number = 0; 

    rows = getInputInRange(MIN, MAX); 

    while (row_counter < rows){

        //resets to columan counter to 0 for each row 
        column_counter = 0; 

        //columns per row is one more than the row number 
        columns = row_counter + 1; 

        //first row = 0, coulumns = 1, cc = 0, prints only one 1 
        while (column_counter < columns){

            output_number = choose(row_counter, column_counter); 

            printf("%-4d", output_number); 
            column_counter++; 
        }

        printf(" \n");
        row_counter++; 
    }

    return 0; 
}

/**
 * Parameters: mininum and maximum of accepted range
 * Purpose: returns the value entered in accepted range 
 */
int getInputInRange(int min, int max){
    int input_value = 0;

    printf("Enter number between %d and %d inclusive: \n", min, max); //not generic ASK IF okay 
    scanf("%d", &input_value); 
    
    //prompts user for new input if they enter number outside range 
    while (input_value < min || input_value > max){
        printf("Error: enter number within defined range: \n");
        scanf("%d", &input_value);
    }

    return input_value;
}

/**
 * Parameters: the non negative integers of n and r in the nCr equation
 * Purpose: computes the unique number of ways to select objected provided the 
 * number of objects as defined by the nCr equation
 */
int choose(int n, int r){
    int result = 0;     
    result  = factorial(n) / (factorial(r) * factorial(n - r));
    return result; 
}

/**
 * Parameters: non negative integer
 * Purpose: returns the calculated factorial of the non negative integer
 */
int factorial(int number){
    int next_term = number - 1; 
    int result = 1; 

    //ask what a floating point error is 
    while (next_term > 0){
        number *= next_term;
        result = number;  
        next_term--;
    }

    return result; 
}

