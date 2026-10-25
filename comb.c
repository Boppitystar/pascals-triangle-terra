/**
 * Parameters: 2 non negative integers 
 * Purpose: computes the nCr of the provided integers 
 */

int factorial (int number); 
int choose(int n, int r){
    int result = factorial(n) / (factorial(r) * factorial(n - r)); 
    return result; 
}

/**
 * Parameters: non negative integer 
 * Purpose: computes the factorial of the non negative number 
 */
int factorial (int number){
    int next_term = number - 1; 
    int result = 1; //must have result for the case where factorial of 0 is 1 

    while (next_term > 0){
        number *= next_term; 
        result = number; 
        next_term--; 
    }

    return result; 
}