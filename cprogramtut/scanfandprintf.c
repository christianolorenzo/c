#include<stdio.h>

int main()
{
	char str[100];
	int i;

	printf("Enter A Value:");
	scanf("%s %d", str, &i);

	printf("\nYour Entered: %s, %d", str, i);

	return 0;
}


