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
	int encryptNum;
	
	printf("Enter a digit to be encrypted (4 digits): ");
	scanf("%d", &digit);
	
	first = (digit / 1000 + 7) % 10;
	second = ( digit % 1000 / 100 + 7 ) % 10;
	third = ( digit % 1000 % 100 / 10 + 7 ) % 10;
	fourth = ( digit % 1000 % 100 % 10 + 7 ) % 10;
	
	temp = first;
	first = third * 1000;
	third = temp * 10;
	temp = second;
	second = fourth * 100;
	fourth = temp * 1;
	
	encryptNum = first + second + third + fourth;
	
	printf("Encrypted Number is: %d\n", encryptNum);
	
	return 0;	

}
