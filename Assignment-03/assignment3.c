#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char input[25];	
	char* fname;
	char* lname;

	fprintf(stdout,"%s","Please enter your first name: ");
	fscanf(stdin,"%s",input);
	fname = (char *)malloc(sizeof(input));
	strcpy(fname,input);

	fprintf(stdout,"%s","Please enter your last name: ");
	fscanf(stdin,"%s",input);
	lname= (char*)malloc(sizeof(input));
	strcpy(lname,input);

	fprintf(stdout,"%s %s %s","Hello",fname,lname);
}
