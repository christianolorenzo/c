#include<stdio.h>

int main()
{
	char str[100];
	
	printf("Enter a value:");
	str = gets(str);

	printf("\nYou Entered:");
	puts(str);

	return 0;
}


