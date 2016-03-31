/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Program to find the sum of all numbers less than a user inputted
 *          number
 * Date   : 05.04.2016
 */

#include<stdio.h>
// beggining of function min
int main(int argc, char *argv[])
{
    // variable declaration
    int num;
    int sum;
    int count;
    
    // prompt
    printf("Enter a Number: ");
    scanf("%d", &num);
    
    // for loop to add numbers less than user inputted number
    for(count = 1; count < num; count++){
        sum += count;
    }
    
    // display the result
    printf("The sum of all numbers less than %d is %d\n", num, sum);

    return 0;
    
}

