#include<stdio.h>
#include<stdlib.h>

void now();

int main()
{
	now();
	
	return 0;
}


void now()
{
	printf("Date : %s\n", __DATE__);  // theses are already defined as those upper are defined
	printf("Time : %s\n", __TIME__);
}
