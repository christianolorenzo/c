/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: 
 * Date   : 05.04.2016
 */

#include<stdio.h>
// beggining of function min
int main(int argc, char *argv[])
{
    double slopes[9] = {17.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 18.24, 6.92};
	
	// set values for comparison starting from the beginning of the array
	double max = slopes[0];
	double min = slopes[0];
	
	int counter;
	
	// loop and comparison
	for(counter = 0; counter < 9; counter++){
		if(slopes[counter] > max){
			max = slopes[counter];
		}
		
		if(slopes[counter] < min){
			min = slopes[counter];
		}
	}
	
	// display results
	printf("Maximun Value is : %lf\n", max);
	printf("Mininum Value is : %lf\n", min);
	
	return 0;

}


