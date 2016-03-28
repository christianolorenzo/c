/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: Accepts a person weight in pounds and converts it to kilogram.
 * Date   : 27.03.2016 
 */

#include<stdio.h>

int main(int argc, char *argv[])
{
    float weightinpounds = 0.0;
    float weightinkillos = 0.0;

    printf("Enter Weight in Pounds: ");
    scanf("%f", weightinpounds);

    weightinkillos = weightinpounds * 0.454;

    printf("Weightinkillo is: %f \n", weightinkillos);
    
    return 0;
}


