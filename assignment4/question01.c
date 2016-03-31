/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Program to find the sum of the digits of a user inputted number.
 * Date   : 05.04.2016
 */

#include <stdio.h>

// beggining of function main
int main(int argc, char *argv[])
{
    // variable declaration
    int num;
    int n;
    int sum = 0;
    int mod;

    // prompt
    printf("Enter a Number: ");
    scanf("%d", &num);
    
    // preserve the original value of "num"
    n = num;

    // while loop to extract each digit of "num" and add them together
    while(num > 0){
        mod = num % 10;
        sum += mod;
        num /= 10;
    }
    
    // display the result
    printf("The sum of the digits of %d is %d \n", n, sum);

    return 0;
}
