/* Name   : Lorenzo Christopher
 * ID#    : 20151747
 * Purpose: 
 * Date   : 05.04.2016
 */

#include<stdio.h>
// beggining of function min
int main(int argc, char *argv[]){
	
	int first;
	int second;
	int third;
	int fourth;
	int digit;
	int temp;
	int decryptNum;
	
	printf("Enter an encrypted number (4 digits): ");
	scanf("%d", &digit);
	
	first = digit / 1000;
	second = digit % 1000 / 100;
	third = digit % 1000 % 100 / 10;
	fourth = digit % 1000 % 100 % 10;
	
	temp = ( first + 3 ) % 10;
	first = ( third + 3 ) % 10;
	third = temp;
	temp = ( second + 3 ) % 10;
	second = ( fourth + 3 ) % 10;
	fourth = temp;
	
	decryptNum = first * 1000 + second * 100 + third * 10 + fourth;
	
	printf("Decrypted number is %d\n", decryptNum);
	
	return 0;	

}
