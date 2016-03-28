#include<stdio.h>

/*function declaration*/
void swap(int *x, int *y);

int main()
{
	/*local variable definition*/
	int a = 100;
	int b = 200;

	printf("Before swap, value of a : %d\n", a);
	printf("Before swap, value of b : %d\n", b);
	
	/*calling  function to swap the values.
	 * &a indicates pointer to a ie. address of variable a
	 * and &b indicates pointer to b ie. address to
	 * variable b.
	 */
	swap(&a, &b);

	printf("After swap, value of a : %d\n", a);
	printf("After swap, value of a : %d\n", b);

	return 0;
}

/*funtion definition to swap the values*/
void swap(int *x, int *y)
{
	int temp;
	temp = *x; /*save the value at address x*/
	*x = *y;   /*put y into x */
	*y = temp; /*put x into y */

	return;
}



