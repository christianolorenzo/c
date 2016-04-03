/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: 
 * Date   : 05.04.2016
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    double prices[5] = {9.92, 6.32, 12.63, 5.95, 10.29};
    double units[5];
    double amounts[5];
    
    int counter;

    for(counter = 0; counter < 5; counter++){
        printf("Enter a Number: ");
        scanf("%lf", &units[counter]);
        amounts[counter] = prices[counter] * units[counter];
    }

	for(counter = 0; counter < 5; counter++){
		//printf("\nPrices Units  Amounts");
		printf("%7lf %7lf %7lf\n", prices[counter], units[counter], amounts[counter]);
	}


    return 0;
}



