/**
 * Parameters: non negative integer 
 * Purpose: computes the factorial of a non negative integer provided by user 
 */
int factorial (int number){
    int result = 0; 
    int decrement = number - 1; 
    
    //while the counter is greater than or equal to 0 for last case 
    while(decrement >= 0){
        //multiples the new factor of (n-c) by the previous saved value of number
        //cannot be by itself because number is the saved value
        number *= decrement;
        
        //technically not needed but for fun
        result = number; 
        decrement--;
    }

    return result; 
}