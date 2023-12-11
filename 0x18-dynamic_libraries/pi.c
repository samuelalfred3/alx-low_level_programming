#include <stdio.h>

/**
 * Description: program calculates and prints the perimeter and area of a circle
 */
void calculateCircle()
{
	int radius;
	float area, perimeter;

	radius = 6;
	perimeter = 2 * 3.14 * radius;
	printf("Perimeter of the Circle = %f inches\n", perimeter);

	area = 3.14 * radius * radius;
	printf("Area of the Circle = %f square inches\n", area);
}
