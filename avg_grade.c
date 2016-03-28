/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Accepts the grades of 13 students and displays the average.
 * Date   : 27.03.2016 
 */




#include<stdio.h>

int main(int argc, char *argv[])
{
    float grade;
    float sum = 0.0;
    float avg = 0.0;
    int counter;

    for(counter = 1; counter < 14; counter++){
        printf("Enter a Grade: ");
        scanf("%f", &grade);
        sum += grade;
    }

    avg = sum / 13;

    printf("The average is: %f \n", avg);

    return 0;

}



