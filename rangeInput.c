/**
 * Parameters: maximum and minimum integer
 * Purpose: repeatedly prompt user into value between min and max integer is entered and saves value 
 */

int getInputInRange(int min, int max){
    int number = 0; 

    //prompt user to enter value 
    printf("Enter the value between minumum and maximun defined: \n");
    scanf("%d", &number);
    
    //prompts user for different value until it is in range defined by min and max 
    while (number < min || number > max){
        printf("Error: number entered outside range, enter again: \n");
        scanf("%d", &number); 
    }

    return number; 
}