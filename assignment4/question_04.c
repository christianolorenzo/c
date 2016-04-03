/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: 
 * Date   : 05.04.2016
 */

#include<stdio.h>



int main(int argc, char *argv[])
{
	// variable declaration	
	int month;
	int day;
	
	// menu
	printf("Enter a month ( use a 1 for January, etc): ");
	scanf("%d", &month);
	
	if(!((month >= 1) && (month <= 12))){
		printf("Invalid month \n");
	}
	
	printf("Enter a day of the month: ");
	scanf("%d", &day);
	
	
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(day >= 1 && day <= 31){
				printf("This is a valid day\n");
			}			
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(day >= 1 && day <= 30){
				printf("This is a valid day\n");
			}
			break;			
		case 2:
			if(day >= 1 && day <= 28){
				printf("This is a valid day\n");
			}
			break;		
		default:
			printf("Invalid day \n");
	
	}
	
	
	
}
