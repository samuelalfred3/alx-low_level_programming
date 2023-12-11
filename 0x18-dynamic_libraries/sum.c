#include <stdio.h>

/**
 * Description: Program prints the sum of two integers
 */
void printSum()
{
	int x, y, sum;

	printf("\nInput the first integer: "); 
	scanf("%d", &x);
	printf("\nInput the second integer: ");
	scanf("%d", &y);
	sum = x + y;
	printf("\nSum of the above two integers = %d\n", sum);
}
