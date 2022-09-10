#include <stdio.h>

 /* this challenge is to create a C program that displays the perimeter and the area of a rectangle.*/

int main()
{
	/* this is to calculate the perimeter of the rectangle*/
	int width;
	int height;
	
	width = 15;
	height = 6;

	int perimeter, area;

	perimeter = (width + height) * 2;

	printf("Display the value of perimeter : %d \n", perimeter);

	/* this is to calculate the area of the rectangle*/

	area = (width + height);

	printf("Display the value of area : %d \n", area);

	return 0;
}
