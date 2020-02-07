#include <stdio.h>
#include <stdlib.h>

#define PIE 3.14

int main()
{
	float radius;

	fprintf(stdout,"Please enter the radius of the circle: ");
	fscanf(stdin,"%f",&radius);
	fprintf(stdout,"The area of the circle is: %.6lf",(PIE*(radius*radius)));
}
