#include <stdio.h>

/**
 * Description: Program calculates the prudoct of two integers.
 */
void multiplyIntegers()
{
	int x, y, result;

	printf("\nInput the first integer: "); 
	scanf("%d", &x);
	printf("\nInput the second integer: ");
	scanf("%d", &y);
	result = x * y;
	printf("Product of the above two integers = %d\n", result);
}
