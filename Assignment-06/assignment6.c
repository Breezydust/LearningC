#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numerator, denominator;

	fprintf(stdout,"Please enter a numerator: ");
	fscanf(stdin,"%d",&numerator);
	fprintf(stdout,"Please enter a denominator: ");
	fscanf(stdin,"%d",&denominator);

	if (numerator%denominator==0)
	{
		fprintf(stdout,"There is NO remainder!");
	}
	else
	{
		fprintf(stdout,"There IS a remainder!");
	}
}
