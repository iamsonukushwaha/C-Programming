#include<stdio.h>
#include<conio.h>
main()
{
	int i, j;
	for(i=5; i>0; i--)
	{
		for(j=5; j>0; j--)
		{
			printf("\t*");
		}
		printf("\n");
	}
	getch();
}
