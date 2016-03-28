/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Calculator
 * Date   : 23.02.2016
 */






#include<stdio.h>

int main(int argc, char *argv[])
{
    int num;
    int sum = 0;
    int result;

    printf("Enter a Number: ");
    scanf("%d", &num);

    while(num > 0){
        result = num % 10;
        num = num / 10;
        sum = sum + result;
    }

    printf("The sum is: %d \n", sum);

    return 0;
}



