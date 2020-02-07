#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t_sec;
	
	fprintf(stdout,"Please enter the amount of seconds: ");
	fscanf(stdin,"%d",&t_sec);

	/*total seconds/3600 to get hours w/o remainder
	modulo divide total seconds by 3600 then divide the remainder by 60 to get total minutes
	modulo divide total seconds by 3600 then module divide the remainder by 60 to get total seconds
	
	This statement is needlessly confusing and should probably be split up into different calculations*/	
	fprintf(stdout,"%d seconds is equal to %d hours, %d minutes, and %d seconds.",t_sec,(t_sec/3600),((t_sec%3600)/60),(((t_sec%3600)%60)));
}
