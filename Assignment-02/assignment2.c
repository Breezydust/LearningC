#include <stdio.h>

int main()
{
	int var1 = 21;
	float var2 = 7.4312;
	char* var3 = "Hey there";

	fprintf(stdout,"%d is an integer!\n%.4f is a float!\n%s is a string!\n",var1,var2,var3);
	return 0;
}
